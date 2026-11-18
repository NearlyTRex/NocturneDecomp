; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005667e0(int *card_index_out)
;
; Parameters:
; int *            Stack[0x4]:4   card_index_out
;
; Referenced Globals:
;   int g_RendererCardIndex
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005667e0
        ;   Label: engine_special.cpp_getCurrentRenderer_FUN_005667e0
    MOV EAX,[0x02cf5fd0]                ; 005667e4 | g_RendererCardIndex
    MOV dword ptr [EDX],EAX             ; 005667e9
    MOV EAX,0x606730                    ; 005667eb
    RET                                 ; 005667f0

