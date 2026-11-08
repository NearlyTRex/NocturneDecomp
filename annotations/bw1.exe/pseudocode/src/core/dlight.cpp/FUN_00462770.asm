; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462770(int param_1)
;
;
; XREF[1]:
;   FUN_0054f0d0 at 0054f9b9
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d8f72
;   TerminatedCString s_CDemonLight_allocMasterZ_005d8f85
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004626f0
;   FUN_004ab0c8
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462770
        ;   Label: FUN_00462770
    PUSH EBP                            ; 00462771
    MOV EBX,dword ptr [ESP + 0xc]       ; 00462772
    CMP dword ptr [EBX + 0x164],0x0     ; 00462776
    JNZ 0x004627c1                      ; 0046277d
        ;   XREF to: 004627c1 (CONDITIONAL_JUMP)  ; LAB_004627c1
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0046277f
        ;   Label: LAB_0046277f
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 00462785
    PUSH EAX                            ; 0046278c
    CALL FUN_004626f0                   ; 0046278d
        ;   XREF to: 004626f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004626f0()
    MOV dword ptr [EBX + 0x2f9c],EAX    ; 00462792
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 00462798
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0046279e
    IMUL EAX,EBP                        ; 004627a4
    ADD ESP,0x4                         ; 004627a7
    ADD EAX,EAX                         ; 004627aa
    PUSH EAX                            ; 004627ac
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 004627ad
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 004627b3
    CALL FUN_004ab0c8                   ; 004627b9
        ;   XREF to: 004ab0c8 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab0c8()
    POP EBP                             ; 004627be
    POP EBX                             ; 004627bf
    RET                                 ; 004627c0
    PUSH ESI                            ; 004627c1
        ;   Label: LAB_004627c1
    MOV ECX,0x5d8f72                    ; 004627c2 | = "..\\core\\dlight.cpp"
    MOV ESI,0xcd                        ; 004627c7
    PUSH 0x5d8f85                       ; 004627cc | = "CDemonLight::allocMasterZBuffer - We ..."
    MOV dword ptr [0x01d1d400],ECX      ; 004627d1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004627d7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004627dd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004627e2
    POP ESI                             ; 004627e5
    JMP 0x0046277f                      ; 004627e6
        ;   XREF to: 0046277f (UNCONDITIONAL_JUMP)  ; LAB_0046277f

