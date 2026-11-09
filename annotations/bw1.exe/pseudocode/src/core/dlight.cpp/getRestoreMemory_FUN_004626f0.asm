; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)
;
; Parameters:
; int              Stack[0x4]:4   pixel_count
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770 at 0046278d
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d8f34
;   TerminatedCString s_getRestoreMemory_Need_mo_005d8f47
;   undefined4 DAT_01b2d370
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004626f0
        ;   Label: core_dlight.cpp_getRestoreMemory_FUN_004626f0
    MOV EAX,0x300064                    ; 004626f1
    SUB EAX,dword ptr [ESP + 0x8]       ; 004626f6
    MOV ECX,dword ptr [0x01b2d370]      ; 004626fa | DAT_01b2d370
    SUB EAX,0x4                         ; 00462700
    CMP EAX,ECX                         ; 00462703
    JC 0x0046272f                       ; 00462705
        ;   XREF to: 0046272f (CONDITIONAL_JUMP)  ; LAB_0046272f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462707
        ;   Label: LAB_00462707
    MOV EAX,[0x01b2d370]                ; 0046270b | DAT_01b2d370
    MOV EDI,dword ptr [0x01b2d370]      ; 00462710 | DAT_01b2d370
    ADD EAX,EAX                         ; 00462716
    ADD EDX,0x8                         ; 00462718
    ADD EAX,0x152d2a8                   ; 0046271b
    ADD EDI,EDX                         ; 00462720
    ADD EAX,0x10                        ; 00462722
    MOV dword ptr [0x01b2d370],EDI      ; 00462725 | DAT_01b2d370
    AND AL,0xf0                         ; 0046272b
    POP EDI                             ; 0046272d
    RET                                 ; 0046272e
    PUSH ESI                            ; 0046272f
        ;   Label: LAB_0046272f
    PUSH EBX                            ; 00462730
    MOV EBX,0x5d8f34                    ; 00462731 | = "..\\core\\dlight.cpp"
    MOV ESI,0xa3                        ; 00462736
    PUSH 0x5d8f47                       ; 0046273b | = "getRestoreMemory - Need more static m..."
    MOV dword ptr [0x01d1d400],EBX      ; 00462740 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00462746 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0046274c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00462751
    POP EBX                             ; 00462754
    POP ESI                             ; 00462755
    JMP 0x00462707                      ; 00462756
        ;   XREF to: 00462707 (UNCONDITIONAL_JUMP)  ; LAB_00462707

