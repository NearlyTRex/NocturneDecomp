; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_00558770(CWinFont *this_ptr,char *text_string)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
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

    PUSH EBX                            ; 00558770
        ;   Label: engine_winfont.cpp_CWinFont_getStringHeight_FUN_00558770
    PUSH ESI                            ; 00558771
    SUB ESP,0x8                         ; 00558772
    MOV EBX,dword ptr [ESP + 0x14]      ; 00558775
    MOV ESI,dword ptr [ESP + 0x18]      ; 00558779
    PUSH -0x1                           ; 0055877d
    PUSH -0x1                           ; 0055877f
    PUSH EBX                            ; 00558781
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0 ; 00558782
        ;   XREF to: 005584d0 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 00558787
    TEST EAX,EAX                        ; 0055878a
    JNZ 0x00558794                      ; 0055878c
        ;   XREF to: 00558794 (CONDITIONAL_JUMP)  ; LAB_00558794
    ADD ESP,0x8                         ; 0055878e
    POP ESI                             ; 00558791
    POP EBX                             ; 00558792
    RET                                 ; 00558793
    PUSH EDI                            ; 00558794
        ;   Label: LAB_00558794
    MOV EDI,ESI                         ; 00558795
    SUB ECX,ECX                         ; 00558797
    DEC ECX                             ; 00558799
    XOR EAX,EAX                         ; 0055879a
    SCASB.REPNE ES:EDI                  ; 0055879c
    NOT ECX                             ; 0055879e
    DEC ECX                             ; 005587a0
    LEA EAX,[ESP + 0x4]                 ; 005587a1
    PUSH EAX                            ; 005587a5
    PUSH ECX                            ; 005587a6
    PUSH ESI                            ; 005587a7
    MOV EDX,dword ptr [EBX + 0x4]       ; 005587a8
    PUSH EDX                            ; 005587ab
    CALL dword ptr CS:[0x5753b4]        ; 005587ac | PTR_GetTextExtentPoint32A_005753b4
    TEST EAX,EAX                        ; 005587b3
    JNZ 0x005587bb                      ; 005587b5
        ;   XREF to: 005587bb (CONDITIONAL_JUMP)  ; LAB_005587bb
    MOV dword ptr [ESP + 0x8],EAX       ; 005587b7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005587bb
        ;   Label: LAB_005587bb
    MOV ESI,dword ptr [EBX + 0x134]     ; 005587bf
    MOV EDI,dword ptr [EBX + 0x138]     ; 005587c5
    ADD EAX,ESI                         ; 005587cb
    ADD EAX,EDI                         ; 005587cd
    POP EDI                             ; 005587cf
    ADD ESP,0x8                         ; 005587d0
    POP ESI                             ; 005587d3
    POP EBX                             ; 005587d4
    RET                                 ; 005587d5

