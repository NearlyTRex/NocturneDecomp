; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005749a5(int param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_PostQuitMessage_0057545c = 00175a1c
;   void* PTR_SetCursorPos_00575468 = 00175a54
;
; *****************************************************************************

section .text

    AND EAX,0x57545c                    ; 005749a5 | PTR_PostQuitMessage_0057545c
        ;   Label: crt_unknown.c_FUN_005749a5
    JMP dword ptr [0x00575468]          ; 005749aa | PTR_SetCursorPos_00575468

