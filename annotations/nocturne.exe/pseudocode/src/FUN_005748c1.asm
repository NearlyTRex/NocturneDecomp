; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005748c1(UINT_PTR param_1,LPJOYCAPSA param_2,UINT param_3)
;
;
; Referenced Globals:
;   void* PTR_joyGetDevCapsA_005753d4 = 001757e2
;   void* PTR_joyGetPos_005753d8 = 001757f4
;
; *****************************************************************************

section .text

    AND EAX,0x5753d8                    ; 005748c1 | PTR_joyGetPos_005753d8
        ;   Label: FUN_005748c1
    JMP dword ptr [0x005753d4]          ; 005748c6 | PTR_joyGetDevCapsA_005753d4

