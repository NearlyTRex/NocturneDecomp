; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_switchRenderer_FUN_005b8120(CExternalRenderer *renderer,int card_index)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   renderer
; int              Stack[0x8]:4   card_index
;
; Called Functions:
;   engine_special.cpp_switchRenderer_FUN_005b8140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b8120
        ;   Label: engine_special.cpp_switchRenderer_FUN_005b8120
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8124
    PUSH EDX                            ; 005b8128
    ADD EAX,0x1dc8                      ; 005b8129
    PUSH EAX                            ; 005b812e
    CALL engine_special.cpp_switchRenderer_FUN_005b8140 ; 005b812f
        ;   XREF to: 005b8140 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_switchRenderer_FUN_005b8140(char * new_dll_name, int card_index)
    ADD ESP,0x8                         ; 005b8134
    RET                                 ; 005b8137

