; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_actor.cpp_updateClassNameHash_FUN_0040c260(uint current_hash, int character)
;
; Parameters:
; uint             Stack[0x4]:4   current_hash
; int              Stack[0x8]:4   character
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c260
        ;   Label: core_actor.cpp_updateClassNameHash_FUN_0040c260
    PUSH EDX                            ; 0040c264
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0040c265
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    ADD ESP,0x4                         ; 0040c26a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040c26d
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c271
    SHL EDX,0x7                         ; 0040c275
    SHR ECX,0x19                        ; 0040c278
    ADD EDX,ECX                         ; 0040c27b
    MOV ECX,EAX                         ; 0040c27d
    SHL ECX,0x11                        ; 0040c27f
    ADD EDX,ECX                         ; 0040c282
    ADD EAX,EDX                         ; 0040c284
    RET                                 ; 0040c286

