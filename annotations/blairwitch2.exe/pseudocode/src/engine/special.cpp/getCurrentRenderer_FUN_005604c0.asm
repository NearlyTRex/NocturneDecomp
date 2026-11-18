; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005604c0(int *card_index_out)
;
; Parameters:
; int *            Stack[0x4]:4   card_index_out
;
; Referenced Globals:
;   int g_INT_0264bba4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005604c0
        ;   Label: engine_special.cpp_getCurrentRenderer_FUN_005604c0
    MOV EAX,[0x0264bba4]                ; 005604c4 | g_INT_0264bba4
    MOV dword ptr [EDX],EAX             ; 005604c9
    MOV EAX,0x61e180                    ; 005604cb
    RET                                 ; 005604d0

