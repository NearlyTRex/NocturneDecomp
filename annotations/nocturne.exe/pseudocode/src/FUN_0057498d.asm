; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057498d(HANDLE param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_SetCursor_0057546c = 00175a64
;   void* PTR_SetThreadPriority_005755b0 = 00176034
;
; *****************************************************************************

section .text

    AND EAX,0x57546c                    ; 0057498d | PTR_SetCursor_0057546c
        ;   Label: FUN_0057498d
    JMP dword ptr [0x005755b0]          ; 00574992 | PTR_SetThreadPriority_005755b0

