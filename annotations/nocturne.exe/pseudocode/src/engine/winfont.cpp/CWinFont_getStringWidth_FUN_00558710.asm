; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_winfont_cpp_CWinFont_getStringWidth_FUN_00558710(int param_1,LPCSTR param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005753b4 = 00175778
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558710
        ;   Label: engine_winfont.cpp_CWinFont_getStringWidth_FUN_00558710
    SUB ESP,0x8                         ; 00558711
    MOV EBX,dword ptr [ESP + 0x14]      ; 00558714
    PUSH -0x1                           ; 00558718
    PUSH -0x1                           ; 0055871a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055871c
    PUSH EDX                            ; 00558720
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0 ; 00558721
        ;   XREF to: 005584d0 (UNCONDITIONAL_CALL)  ; undefined engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0()
    ADD ESP,0xc                         ; 00558726
    TEST EAX,EAX                        ; 00558729
    JNZ 0x00558732                      ; 0055872b
        ;   XREF to: 00558732 (CONDITIONAL_JUMP)  ; LAB_00558732
    ADD ESP,0x8                         ; 0055872d
    POP EBX                             ; 00558730
    RET                                 ; 00558731
    PUSH EDI                            ; 00558732
        ;   Label: LAB_00558732
    MOV EDI,EBX                         ; 00558733
    SUB ECX,ECX                         ; 00558735
    DEC ECX                             ; 00558737
    XOR EAX,EAX                         ; 00558738
    SCASB.REPNE ES:EDI                  ; 0055873a
    NOT ECX                             ; 0055873c
    DEC ECX                             ; 0055873e
    LEA EAX,[ESP + 0x4]                 ; 0055873f
    PUSH EAX                            ; 00558743
    PUSH ECX                            ; 00558744
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00558745
    PUSH EBX                            ; 00558749
    MOV ECX,dword ptr [EAX + 0x4]       ; 0055874a
    PUSH ECX                            ; 0055874d
    CALL dword ptr CS:[0x5753b4]        ; 0055874e | PTR_GetTextExtentPoint32A_005753b4
    TEST EAX,EAX                        ; 00558755
    JNZ 0x0055875d                      ; 00558757
        ;   XREF to: 0055875d (CONDITIONAL_JUMP)  ; LAB_0055875d
    MOV dword ptr [ESP + 0x4],EAX       ; 00558759
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055875d
        ;   Label: LAB_0055875d
    POP EDI                             ; 00558761
    ADD ESP,0x8                         ; 00558762
    POP EBX                             ; 00558765
    RET                                 ; 00558766

