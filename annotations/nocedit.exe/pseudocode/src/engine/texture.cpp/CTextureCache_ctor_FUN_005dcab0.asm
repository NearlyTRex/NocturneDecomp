; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   max_texture_count
;
; XREF[1]:
;   engine_texture.cpp_initTextureCache_FUN_005dd760 at 005dd787
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dcab0
        ;   Label: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005dcab1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005dcab5
    MOV dword ptr [ECX + 0x14008],0x0   ; 005dcab9
    MOV dword ptr [ECX + 0x4],EAX       ; 005dcac3
    MOV EAX,ECX                         ; 005dcac6
    LEA EDX,[ECX + 0x1000]              ; 005dcac8
    XOR EBX,EBX                         ; 005dcace
    ADD EAX,0x4                         ; 005dcad0
        ;   Label: LAB_005dcad0
    MOV dword ptr [EAX + 0x1004],EBX    ; 005dcad3
    MOV dword ptr [EAX + 0x2004],EBX    ; 005dcad9
    MOV dword ptr [EAX + 0x13004],EBX   ; 005dcadf
    MOV dword ptr [EAX + 0x4],EBX       ; 005dcae5
    CMP EAX,EDX                         ; 005dcae8
    JNZ 0x005dcad0                      ; 005dcaea
        ;   XREF to: 005dcad0 (CONDITIONAL_JUMP)  ; LAB_005dcad0
    MOV EAX,ECX                         ; 005dcaec
    MOV dword ptr [ECX],0x0             ; 005dcaee
    POP EBX                             ; 005dcaf4
    RET                                 ; 005dcaf5

