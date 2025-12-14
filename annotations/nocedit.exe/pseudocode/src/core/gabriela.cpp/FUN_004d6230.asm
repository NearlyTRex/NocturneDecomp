; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d6230()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042b0e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6230
        ;   Label: core_gabriela.cpp_FUN_004d6230
    MOV EAX,dword ptr [EAX + 0x1fa68]   ; 004d6234
    PUSH EAX                            ; 004d623a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d623b
    CALL dword ptr [EDX + 0xc]          ; 004d6241
    ADD ESP,0x4                         ; 004d6244
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6247
    PUSH EDX                            ; 004d624b
    CALL core_charactr.cpp_CCharacter_FUN_0042b0e0 ; 004d624c
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042b0e0(CCharacter * this_ptr)
    MOV EAX,0x1                         ; 004d6251
    ADD ESP,0x4                         ; 004d6256
    RET                                 ; 004d6259

