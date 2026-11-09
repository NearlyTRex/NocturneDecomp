; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f0990(CHighPriestOfGardath *this_ptr)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004f0960 at 004f0973
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0990
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f0990
    PUSH ESI                            ; 004f0991
    PUSH EDI                            ; 004f0992
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f0993
    PUSH EDX                            ; 004f0997
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 004f0998
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f099d
    PUSH 0x5e522f                       ; 004f09a0
    MOV EBX,EAX                         ; 004f09a5
    LEA EDI,[EAX + 0x158]               ; 004f09a7
    PUSH EDI                            ; 004f09ad
    MOV dword ptr [EAX + 0x154],0x6024a4 ; 004f09ae
    CALL core_skeleton.cpp_FUN_00569f50 ; 004f09b8
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 004f09bd
    MOV ESI,0x5e523a                    ; 004f09c0
    LEA EDI,[EBX + 0x1fab8]             ; 004f09c5
    PUSH EDI                            ; 004f09cb
    MOV AL,byte ptr [ESI]               ; 004f09cc
        ;   Label: LAB_004f09cc
    MOV byte ptr [EDI],AL               ; 004f09ce
    CMP AL,0x0                          ; 004f09d0
    JZ 0x004f09e4                       ; 004f09d2
        ;   XREF to: 004f09e4 (CONDITIONAL_JUMP)  ; LAB_004f09e4
    MOV AL,byte ptr [ESI + 0x1]         ; 004f09d4
    ADD ESI,0x2                         ; 004f09d7
    MOV byte ptr [EDI + 0x1],AL         ; 004f09da
    ADD EDI,0x2                         ; 004f09dd
    CMP AL,0x0                          ; 004f09e0
    JNZ 0x004f09cc                      ; 004f09e2
        ;   XREF to: 004f09cc (CONDITIONAL_JUMP)  ; LAB_004f09cc
    POP EDI                             ; 004f09e4
        ;   Label: LAB_004f09e4
    MOV EAX,EBX                         ; 004f09e5
    POP EDI                             ; 004f09e7
    POP ESI                             ; 004f09e8
    POP EBX                             ; 004f09e9
    RET                                 ; 004f09ea

