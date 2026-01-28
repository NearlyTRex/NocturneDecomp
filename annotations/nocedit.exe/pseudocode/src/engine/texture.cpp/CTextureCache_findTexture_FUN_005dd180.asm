; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180 (CTextureCache *this_ptr,int hint_index,char *texture_name)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hint_index
; char *           Stack[0xc]:4   texture_name
;
; XREF[1]:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 at 005dd835
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd180
        ;   Label: engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
    PUSH ESI                            ; 005dd181
    PUSH EDI                            ; 005dd182
    PUSH EBP                            ; 005dd183
    MOV EDI,dword ptr [ESP + 0x14]      ; 005dd184
    MOV EBX,dword ptr [ESP + 0x18]      ; 005dd188
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005dd18c
    TEST EBX,EBX                        ; 005dd190
    JL 0x005dd199                       ; 005dd192
        ;   XREF to: 005dd199 (CONDITIONAL_JUMP)  ; LAB_005dd199
    CMP EBX,dword ptr [EDI + 0x4]       ; 005dd194
    JL 0x005dd1d1                       ; 005dd197
        ;   XREF to: 005dd1d1 (CONDITIONAL_JUMP)  ; LAB_005dd1d1
    MOV ECX,dword ptr [EDI + 0x14008]   ; 005dd199
        ;   Label: LAB_005dd199
    XOR EBX,EBX                         ; 005dd19f
    TEST ECX,ECX                        ; 005dd1a1
    JLE 0x005dd1c7                      ; 005dd1a3
        ;   XREF to: 005dd1c7 (CONDITIONAL_JUMP)  ; LAB_005dd1c7
    LEA ESI,[EDI + 0x3008]              ; 005dd1a5
    PUSH EBP                            ; 005dd1ab
        ;   Label: LAB_005dd1ab
    PUSH ESI                            ; 005dd1ac
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005dd1ad
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dd1b2
    TEST EAX,EAX                        ; 005dd1b5
    JZ 0x005dd1ec                       ; 005dd1b7
        ;   XREF to: 005dd1ec (CONDITIONAL_JUMP)  ; LAB_005dd1ec
    INC EBX                             ; 005dd1b9
    MOV EAX,dword ptr [EDI + 0x14008]   ; 005dd1ba
    ADD ESI,0x40                        ; 005dd1c0
    CMP EBX,EAX                         ; 005dd1c3
    JL 0x005dd1ab                       ; 005dd1c5
        ;   XREF to: 005dd1ab (CONDITIONAL_JUMP)  ; LAB_005dd1ab
    MOV EAX,0xffffffff                  ; 005dd1c7
        ;   Label: LAB_005dd1c7
    POP EBP                             ; 005dd1cc
    POP EDI                             ; 005dd1cd
    POP ESI                             ; 005dd1ce
    POP EBX                             ; 005dd1cf
    RET                                 ; 005dd1d0
    MOV EAX,EBX                         ; 005dd1d1
        ;   Label: LAB_005dd1d1
    LEA ESI,[EDI + 0x3008]              ; 005dd1d3
    SHL EAX,0x6                         ; 005dd1d9
    PUSH EBP                            ; 005dd1dc
    ADD EAX,ESI                         ; 005dd1dd
    PUSH EAX                            ; 005dd1df
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005dd1e0
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dd1e5
    TEST EAX,EAX                        ; 005dd1e8
    JNZ 0x005dd199                      ; 005dd1ea
        ;   XREF to: 005dd199 (CONDITIONAL_JUMP)  ; LAB_005dd199
    MOV EAX,EBX                         ; 005dd1ec
        ;   Label: LAB_005dd1ec
    POP EBP                             ; 005dd1ee
    POP EDI                             ; 005dd1ef
    POP ESI                             ; 005dd1f0
    POP EBX                             ; 005dd1f1
    RET                                 ; 005dd1f2

