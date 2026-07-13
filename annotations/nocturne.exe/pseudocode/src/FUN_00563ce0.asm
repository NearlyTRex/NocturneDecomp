; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563ce0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_LAB_005c1cb4 = 0056ad3f
;   undefined1* PTR_LAB_005c1cb8 = 0056ad3f
;   undefined1* PTR_LAB_005c1cbc = 0056ad3f
;   undefined1* PTR_LAB_005c1cc0 = 0056ad3f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563ce0
        ;   Label: FUN_00563ce0
    PUSH ESI                            ; 00563ce1
    MOV EDX,0x56a189                    ; 00563ce2
    MOV ECX,0x56a1b5                    ; 00563ce7
    MOV EBX,0x56a388                    ; 00563cec
    MOV ESI,0x56ad3a                    ; 00563cf1
    MOV dword ptr [0x005c1cb4],EDX      ; 00563cf6 | PTR_LAB_005c1cb4
    MOV dword ptr [0x005c1cb8],ECX      ; 00563cfc | PTR_LAB_005c1cb8
    MOV dword ptr [0x005c1cbc],EBX      ; 00563d02 | PTR_LAB_005c1cbc
    MOV dword ptr [0x005c1cc0],ESI      ; 00563d08 | PTR_LAB_005c1cc0
    POP ESI                             ; 00563d0e
    POP EBX                             ; 00563d0f
    RET                                 ; 00563d10

