; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_00545390(CTextureCache *this_ptr,int hint_index,char *texture_name)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hint_index
; char *           Stack[0xc]:4   texture_name
;
; XREF[1]:
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920 at 00545955
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545390
        ;   Label: engine_texture.cpp_CTextureCache_findTexture_FUN_00545390
    PUSH ESI                            ; 00545391
    PUSH EDI                            ; 00545392
    PUSH EBP                            ; 00545393
    MOV EDI,dword ptr [ESP + 0x14]      ; 00545394
    MOV EBX,dword ptr [ESP + 0x18]      ; 00545398
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0054539c
    TEST EBX,EBX                        ; 005453a0
    JL 0x005453a9                       ; 005453a2
        ;   XREF to: 005453a9 (CONDITIONAL_JUMP)  ; LAB_005453a9
    CMP EBX,dword ptr [EDI + 0x4]       ; 005453a4
    JL 0x005453e1                       ; 005453a7
        ;   XREF to: 005453e1 (CONDITIONAL_JUMP)  ; LAB_005453e1
    MOV ECX,dword ptr [EDI + 0xd3008]   ; 005453a9
        ;   Label: LAB_005453a9
    XOR EBX,EBX                         ; 005453af
    TEST ECX,ECX                        ; 005453b1
    JLE 0x005453d7                      ; 005453b3
        ;   XREF to: 005453d7 (CONDITIONAL_JUMP)  ; LAB_005453d7
    LEA ESI,[EDI + 0x3008]              ; 005453b5
    PUSH EBP                            ; 005453bb
        ;   Label: LAB_005453bb
    PUSH ESI                            ; 005453bc
    CALL crt_string.c__strcmp_FUN_005649c0 ; 005453bd
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005453c2
    TEST EAX,EAX                        ; 005453c5
    JZ 0x005453fc                       ; 005453c7
        ;   XREF to: 005453fc (CONDITIONAL_JUMP)  ; LAB_005453fc
    INC EBX                             ; 005453c9
    MOV EAX,dword ptr [EDI + 0xd3008]   ; 005453ca
    ADD ESI,0x40                        ; 005453d0
    CMP EBX,EAX                         ; 005453d3
    JL 0x005453bb                       ; 005453d5
        ;   XREF to: 005453bb (CONDITIONAL_JUMP)  ; LAB_005453bb
    MOV EAX,0xffffffff                  ; 005453d7
        ;   Label: LAB_005453d7
    POP EBP                             ; 005453dc
    POP EDI                             ; 005453dd
    POP ESI                             ; 005453de
    POP EBX                             ; 005453df
    RET                                 ; 005453e0
    MOV EAX,EBX                         ; 005453e1
        ;   Label: LAB_005453e1
    LEA ESI,[EDI + 0x3008]              ; 005453e3
    SHL EAX,0x6                         ; 005453e9
    PUSH EBP                            ; 005453ec
    ADD EAX,ESI                         ; 005453ed
    PUSH EAX                            ; 005453ef
    CALL crt_string.c__strcmp_FUN_005649c0 ; 005453f0
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005453f5
    TEST EAX,EAX                        ; 005453f8
    JNZ 0x005453a9                      ; 005453fa
        ;   XREF to: 005453a9 (CONDITIONAL_JUMP)  ; LAB_005453a9
    MOV EAX,EBX                         ; 005453fc
        ;   Label: LAB_005453fc
    POP EBP                             ; 005453fe
    POP EDI                             ; 005453ff
    POP ESI                             ; 00545400
    POP EBX                             ; 00545401
    RET                                 ; 00545402

