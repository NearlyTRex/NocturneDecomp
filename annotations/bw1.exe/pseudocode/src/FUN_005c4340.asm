; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c4340(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_006269dc = 005ca4f0
;   void* PTR_FUN_006269e0 = 005ca4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4340
        ;   Label: FUN_005c4340
    MOV EDX,0x5ca6bf                    ; 005c4341
    MOV EBX,0x5c4359                    ; 005c4346
    MOV dword ptr [0x006269dc],EDX      ; 005c434b | PTR_FUN_006269dc
    MOV dword ptr [0x006269e0],EBX      ; 005c4351 | PTR_FUN_006269e0
    POP EBX                             ; 005c4357
    RET                                 ; 005c4358

