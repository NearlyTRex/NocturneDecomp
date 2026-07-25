; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057489d(HWND param_1,RECT *param_2,BOOL param_3)
;
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005753dc = 00175800
;   void* PTR_InvalidateRect_0057543c = 001759a8
;
; *****************************************************************************

section .text

    AND EAX,0x5753dc                    ; 0057489d | PTR_mciGetErrorStringA_005753dc
        ;   Label: FUN_0057489d
    JMP dword ptr [0x0057543c]          ; 005748a2 | PTR_InvalidateRect_0057543c

