// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf);

void Vmux___024root___eval_initial(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("a b sel | y\n",0);
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 0U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         11);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 1U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         14);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 0U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         17);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 1U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         20);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 0U;
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         23);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 1U;
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         26);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 0U;
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         29);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 1U;
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         32);
    VL_WRITEF_NX("%b %b  %b  | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__sel,1,(IData)(vlSelfRef.tb__DOT__dut__DOT__y));
    VL_FINISH_MT("tb.v", 35, "");
    co_return;
}

void Vmux___024root___eval_triggers_vec__act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_triggers_vec__act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vmux___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmux___024root___act_sequent__TOP__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___act_sequent__TOP__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__y = ((IData)(vlSelfRef.tb__DOT__sel)
                                       ? (IData)(vlSelfRef.tb__DOT__b)
                                       : (IData)(vlSelfRef.tb__DOT__a));
}

void Vmux___024root___eval_act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vmux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___eval_nba(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_nba\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___timing_resume(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___timing_resume\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmux___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmux___024root___eval_phase__act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux___024root___eval_triggers_vec__act(vlSelf);
    Vmux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmux___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vmux___024root___timing_resume(vlSelf);
        Vmux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux___024root___eval_phase__inact(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__inact\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vmux___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmux___024root___eval_phase__nba(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__nba\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmux___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmux___024root___eval_nba(vlSelf);
        Vmux___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vmux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vmux___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vmux___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmux___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
