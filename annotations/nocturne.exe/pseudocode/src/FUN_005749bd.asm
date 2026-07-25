; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005749bd(UINT param_1)
;
;
; Referenced Globals:
;   void* PTR_timeBeginPeriod_005753e4 = 00175828
;   void* PTR_MessageBoxA_0057544c = 001759e0
;
; *****************************************************************************

section .text

    AND EAX,0x57544c                    ; 005749bd | PTR_MessageBoxA_0057544c
        ;   Label: FUN_005749bd
    JMP dword ptr [0x005753e4]          ; 005749c2 | PTR_timeBeginPeriod_005753e4

