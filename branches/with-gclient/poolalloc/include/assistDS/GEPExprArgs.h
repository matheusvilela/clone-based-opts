
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Identify GEPs used as arguments to call sites.
//
//===----------------------------------------------------------------------===//

#include "llvm/IR/Instructions.h"
#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

namespace llvm {
  //
  // Class: GEPExprArgs
  //
  // Description:
  //  Implement an LLVM pass that clones functions which are passed GEPs
  //  as an argument
  //  
  //
  class GEPExprArgs : public ModulePass {
  public:
    static char ID;
    GEPExprArgs() : ModulePass(ID) {}
    virtual bool runOnModule(Module& M);
  };
}

