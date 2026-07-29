; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_texture_cpp_FUN_00544de0(CTextureCache *this_ptr,int max_texture_count)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   max_texture_count
;
; XREF[1]:
;   engine_texture.cpp_FUN_005458a0 at 005458bd
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00544de0
        ;   Label: engine_texture.cpp_FUN_00544de0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00544de4
    MOV dword ptr [ECX + 0xd3008],0x0   ; 00544de8
    MOV dword ptr [ECX + 0x4],EAX       ; 00544df2
    MOV EAX,ECX                         ; 00544df5
    LEA EDX,[ECX + 0x1000]              ; 00544df7
    ADD EAX,0x4                         ; 00544dfd
        ;   Label: LAB_00544dfd
    MOV dword ptr [EAX + 0x1004],0x0    ; 00544e00
    MOV dword ptr [EAX + 0x2004],0x0    ; 00544e0a
    MOV dword ptr [EAX + 0x4],0x0       ; 00544e14
    CMP EAX,EDX                         ; 00544e1b
    JNZ 0x00544dfd                      ; 00544e1d
        ;   XREF to: 00544dfd (CONDITIONAL_JUMP)  ; LAB_00544dfd
    MOV EAX,ECX                         ; 00544e1f
    MOV dword ptr [ECX],0x0             ; 00544e21
    RET                                 ; 00544e27

