// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBLINKING_H_
#define _VBLINKING_H_  // guard

#include "verilated.h"

//==========

class Vblinking__Syms;

//----------

VL_MODULE(Vblinking) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(LED,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ blinking__DOT__LED_status;
    IData/*31:0*/ blinking__DOT__counter;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vblinking__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vblinking);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vblinking(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vblinking();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vblinking__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vblinking__Syms* symsp, bool first);
  private:
    static QData _change_request(Vblinking__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vblinking__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vblinking__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vblinking__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vblinking__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vblinking__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vblinking__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vblinking__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
