; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b49(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)
;
;
; Referenced Globals:
;   void* PTR_MultiByteToWideChar_0057556c = 00175ee0
;   void* PTR_VirtualQuery_005755dc = 001760f2
;
; *****************************************************************************

section .text

    AND EAX,0x5755dc                    ; 00574b49 | PTR_VirtualQuery_005755dc
        ;   Label: FUN_00574b49
    JMP dword ptr [0x0057556c]          ; 00574b4e | PTR_MultiByteToWideChar_0057556c

