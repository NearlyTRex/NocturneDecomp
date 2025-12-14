; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dest.cpp_FUN_0046f9b0()
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 at 004beb73
;
; Referenced Globals:
;   double DOUBLE_0061e3a2 = 0.25
;   double DOUBLE_0061e3aa = 0.100000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_dest.cpp_FUN_0046fd50
;   core_event.cpp_CEventList_FUN_004aabe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f9b0
        ;   Label: core_dest.cpp_FUN_0046f9b0
    PUSH ESI                            ; 0046f9b1
    PUSH EDI                            ; 0046f9b2
    PUSH EBP                            ; 0046f9b3
    MOV EBP,ESP                         ; 0046f9b4
    SUB ESP,0x24                        ; 0046f9b6
    AND ESP,0xfffffff8                  ; 0046f9b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046f9bc
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0046f9bf
    JZ 0x0046fa51                       ; 0046f9c6
        ;   XREF to: 0046fa51 (CONDITIONAL_JUMP)  ; LAB_0046fa51
    CMP dword ptr [EAX + 0x158],0x0     ; 0046f9cc
    JNZ 0x0046fa51                      ; 0046f9d3
        ;   XREF to: 0046fa51 (CONDITIONAL_JUMP)  ; LAB_0046fa51
    LEA ESI,[EAX + 0x20]                ; 0046f9d9
    XOR EDI,EDI                         ; 0046f9dc
    XOR EBX,EBX                         ; 0046f9de
    MOV EDX,dword ptr [0x006810c8]      ; 0046f9e0 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_0046f9e0
    CMP EDI,dword ptr [EDX + 0x14d154]  ; 0046f9e6 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x0046fa51                      ; 0046f9ec
        ;   XREF to: 0046fa51 (CONDITIONAL_JUMP)  ; LAB_0046fa51
    ADD EDX,EBX                         ; 0046f9ee | g_CDemonSetInstance
    MOV EAX,dword ptr [EDX + 0x14d158]  ; 0046f9f0 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    FLD float ptr [ESI]                 ; 0046f9f6
    FSUB float ptr [EAX + 0x20]         ; 0046f9f8
    FSTP float ptr [ESP + 0xc]          ; 0046f9fb
    FLD float ptr [ESI + 0x4]           ; 0046f9ff
    FSUB float ptr [EAX + 0x24]         ; 0046fa02
    FST float ptr [ESP + 0x10]          ; 0046fa05
    FMUL float ptr [ESP + 0x10]         ; 0046fa09
    FLD float ptr [ESP + 0xc]           ; 0046fa0d
    FMUL ST0                            ; 0046fa11
    FLD float ptr [ESI + 0x8]           ; 0046fa13
    FSUB float ptr [EAX + 0x28]         ; 0046fa16
    FXCH                                ; 0046fa19
    FADDP ST2,ST0                       ; 0046fa1b
    FST float ptr [ESP + 0x14]          ; 0046fa1d
    FMUL float ptr [ESP + 0x14]         ; 0046fa21
    FADDP                               ; 0046fa25
    FSQRT                               ; 0046fa27
    FCOMP double ptr [0x0061e3aa]       ; 0046fa29 | DOUBLE_0061e3aa
    FNSTSW AX                           ; 0046fa2f
    SAHF                                ; 0046fa31
    JC 0x0046fa3a                       ; 0046fa32
        ;   XREF to: 0046fa3a (CONDITIONAL_JUMP)  ; LAB_0046fa3a
    INC EDI                             ; 0046fa34
        ;   Label: LAB_0046fa34
    ADD EBX,0x4                         ; 0046fa35
    JMP 0x0046f9e0                      ; 0046fa38
        ;   XREF to: 0046f9e0 (UNCONDITIONAL_JUMP)  ; LAB_0046f9e0
    MOV ECX,dword ptr [EDX + 0x14d158]  ; 0046fa3a | g_CDemonSetInstance.actor_list_data[0]
        ;   Label: LAB_0046fa3a
    PUSH ECX                            ; 0046fa40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fa41
    PUSH EAX                            ; 0046fa44
    CALL core_dest.cpp_FUN_0046fd50     ; 0046fa45
        ;   XREF to: 0046fd50 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_FUN_0046fd50()
    ADD ESP,0x8                         ; 0046fa4a
    TEST EAX,EAX                        ; 0046fa4d
    JZ 0x0046fa34                       ; 0046fa4f
        ;   XREF to: 0046fa34 (CONDITIONAL_JUMP)  ; LAB_0046fa34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fa51
        ;   Label: LAB_0046fa51
    MOV EDX,dword ptr [EAX + 0x158]     ; 0046fa54
    TEST EDX,EDX                        ; 0046fa5a
    JZ 0x0046fb10                       ; 0046fa5c
        ;   XREF to: 0046fb10 (CONDITIONAL_JUMP)  ; LAB_0046fb10
    FLD float ptr [EDX + 0x20]          ; 0046fa62
    FSUB float ptr [EAX + 0x20]         ; 0046fa65
    FSTP float ptr [ESP]                ; 0046fa68
    FLD float ptr [EDX + 0x24]          ; 0046fa6b
    FSUB float ptr [EAX + 0x24]         ; 0046fa6e
    FSTP float ptr [ESP + 0x4]          ; 0046fa71
    FLD float ptr [EDX + 0x28]          ; 0046fa75
    LEA EDX,[ESP + 0x18]                ; 0046fa78
    FSUB float ptr [EAX + 0x28]         ; 0046fa7c
    MOV EAX,ESP                         ; 0046fa7f
    FSTP float ptr [ESP + 0x8]          ; 0046fa81
    CMP EDX,EAX                         ; 0046fa85
    JNZ 0x0046fb24                      ; 0046fa87
        ;   XREF to: 0046fb24 (CONDITIONAL_JUMP)  ; LAB_0046fb24
    FLD float ptr [ESP + 0x18]          ; 0046fa8d
        ;   Label: LAB_0046fa8d
    FABS                                ; 0046fa91
    FCOMP double ptr [0x0061e3a2]       ; 0046fa93 | DOUBLE_0061e3a2
    FNSTSW AX                           ; 0046fa99
    SAHF                                ; 0046fa9b
    JNC 0x0046fb49                      ; 0046fa9c
        ;   XREF to: 0046fb49 (CONDITIONAL_JUMP)  ; LAB_0046fb49
    FLD float ptr [ESP + 0x1c]          ; 0046faa2
    FABS                                ; 0046faa6
    FCOMP double ptr [0x0061e3a2]       ; 0046faa8 | DOUBLE_0061e3a2
    FNSTSW AX                           ; 0046faae
    SAHF                                ; 0046fab0
    JNC 0x0046fb49                      ; 0046fab1
        ;   XREF to: 0046fb49 (CONDITIONAL_JUMP)  ; LAB_0046fb49
    FLD float ptr [ESP + 0x20]          ; 0046fab7
    FABS                                ; 0046fabb
    FCOMP double ptr [0x0061e3a2]       ; 0046fabd | DOUBLE_0061e3a2
    FNSTSW AX                           ; 0046fac3
    SAHF                                ; 0046fac5
    JNC 0x0046fb49                      ; 0046fac6
        ;   XREF to: 0046fb49 (CONDITIONAL_JUMP)  ; LAB_0046fb49
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046facc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046facf
    MOV ECX,dword ptr [EDX + 0x1ec]     ; 0046fad2
    ADD EAX,0x188                       ; 0046fad8
    TEST ECX,ECX                        ; 0046fadd
    JNZ 0x0046fb40                      ; 0046fadf
        ;   XREF to: 0046fb40 (CONDITIONAL_JUMP)  ; LAB_0046fb40
    CMP dword ptr [EDX + 0x184],0x0     ; 0046fae1
    JNZ 0x0046fb03                      ; 0046fae8
        ;   XREF to: 0046fb03 (CONDITIONAL_JUMP)  ; LAB_0046fb03
    CMP dword ptr [EDX + 0x1f0],0x0     ; 0046faea
    JNZ 0x0046fb03                      ; 0046faf1
        ;   XREF to: 0046fb03 (CONDITIONAL_JUMP)  ; LAB_0046fb03
    PUSH EAX                            ; 0046faf3
    MOV EDI,dword ptr [0x006793d0]      ; 0046faf4 | g_CEventListPtr
    PUSH EDI                            ; 0046fafa | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 0046fafb
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   Label: LAB_0046fafb
    ADD ESP,0x8                         ; 0046fb00
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fb03
        ;   Label: LAB_0046fb03
    MOV dword ptr [EAX + 0x184],0x1     ; 0046fb06
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fb10
        ;   Label: LAB_0046fb10
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0046fb13
    MOV ESP,EBP                         ; 0046fb1d
    POP EBP                             ; 0046fb1f
    POP EDI                             ; 0046fb20
    POP ESI                             ; 0046fb21
    POP EBX                             ; 0046fb22
    RET                                 ; 0046fb23
    MOV EAX,dword ptr [ESP]             ; 0046fb24
        ;   Label: LAB_0046fb24
    MOV dword ptr [ESP + 0x18],EAX      ; 0046fb27
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046fb2b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046fb2f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046fb33
    MOV dword ptr [ESP + 0x20],EAX      ; 0046fb37
    JMP 0x0046fa8d                      ; 0046fb3b
        ;   XREF to: 0046fa8d (UNCONDITIONAL_JUMP)  ; LAB_0046fa8d
    PUSH EAX                            ; 0046fb40
        ;   Label: LAB_0046fb40
    MOV EAX,[0x006793d0]                ; 0046fb41 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 0046fb46 | g_CEventListInstance
    JMP 0x0046fafb                      ; 0046fb47
        ;   XREF to: 0046fafb (UNCONDITIONAL_JUMP)  ; LAB_0046fafb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fb49
        ;   Label: LAB_0046fb49
    MOV dword ptr [EAX + 0x184],0x0     ; 0046fb4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046fb56
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0046fb59
    MOV ESP,EBP                         ; 0046fb63
    POP EBP                             ; 0046fb65
    POP EDI                             ; 0046fb66
    POP ESI                             ; 0046fb67
    POP EBX                             ; 0046fb68
    RET                                 ; 0046fb69

