; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005749e1(HDC param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   void* PTR_DeleteObject_005753ac = 00175756
;   void* PTR_Rectangle_005753b8 = 00175790
;
; *****************************************************************************

section .text

    AND EAX,0x5753ac                    ; 005749e1 | PTR_DeleteObject_005753ac
        ;   Label: FUN_005749e1
    JMP dword ptr [0x005753b8]          ; 005749e6 | PTR_Rectangle_005753b8

