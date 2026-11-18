; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_00582f10(int *card_index_out)
;
; Parameters:
; int *            Stack[0x4]:4   card_index_out
;
; Referenced Globals:
;   int g_INT_02c83374
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00582f10
        ;   Label: engine_special.cpp_getCurrentRenderer_FUN_00582f10
    MOV EAX,[0x02c83374]                ; 00582f14 | g_INT_02c83374
    MOV dword ptr [EDX],EAX             ; 00582f19
    MOV EAX,0x6257d0                    ; 00582f1b
    RET                                 ; 00582f20

