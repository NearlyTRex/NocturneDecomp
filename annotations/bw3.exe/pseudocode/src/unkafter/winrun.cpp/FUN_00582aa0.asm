; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00582aa0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d22fa8
;
; *****************************************************************************

section .text

    ADD dword ptr [EAX],EAX             ; 00582aa0
        ;   Label: unkafter_winrun.cpp_FUN_00582aa0
    ADD byte ptr [EDI],CL               ; 00582aa2
    MOV DS,word ptr [EBP + 0x8b000000]  ; 00582aa4
    TEST byte ptr [ESP],AH              ; 00582aaa
    ADD byte ptr [EAX],AL               ; 00582aad
    ADD byte ptr [EBX + 0xa824ac],CL    ; 00582aaf
    ADD byte ptr [EAX],AL               ; 00582ab5
    ADD EAX,EAX                         ; 00582ab7
    ADD EBP,EBP                         ; 00582ab9
    MOV dword ptr [ESP + 0xa4],EAX      ; 00582abb
    MOV dword ptr [ESP + 0xa8],EBP      ; 00582ac2
    MOV EAX,dword ptr [ESP + 0x94]      ; 00582ac9
    MOV EDX,EAX                         ; 00582ad0
    SAR EDX,0x1f                        ; 00582ad2
    SUB EAX,EDX                         ; 00582ad5
    SAR EAX,0x1                         ; 00582ad7
    MOV EBX,EAX                         ; 00582ad9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00582adb
    MOV EDX,EAX                         ; 00582ae2
    SAR EDX,0x1f                        ; 00582ae4
    SUB EAX,EDX                         ; 00582ae7
    SAR EAX,0x1                         ; 00582ae9
    SUB EBX,EAX                         ; 00582aeb
    MOV EAX,dword ptr [ESP + 0x98]      ; 00582aed
    MOV EDX,EAX                         ; 00582af4
    SAR EDX,0x1f                        ; 00582af6
    SUB EAX,EDX                         ; 00582af9
    SAR EAX,0x1                         ; 00582afb
    MOV ECX,EAX                         ; 00582afd
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00582aff
    MOV EDX,EAX                         ; 00582b06
    SAR EDX,0x1f                        ; 00582b08
    SUB EAX,EDX                         ; 00582b0b
    SAR EAX,0x1                         ; 00582b0d
    PUSH 0x1                            ; 00582b0f
    MOV EDX,dword ptr [ESP + 0xac]      ; 00582b11
    PUSH EDX                            ; 00582b18
    MOV ESI,dword ptr [ESP + 0xac]      ; 00582b19
    PUSH ESI                            ; 00582b20
    SUB ECX,EAX                         ; 00582b21
    PUSH ECX                            ; 00582b23
    PUSH EBX                            ; 00582b24
    MOV EDI,dword ptr [0x02d22fa8]      ; 00582b25 | DAT_02d22fa8
    PUSH EDI                            ; 00582b2b
    CALL dword ptr CS:[0x5b34dc]        ; 00582b2c
    POP EBX                             ; 00582b33
    POP ESI                             ; 00582b34
    POP EDI                             ; 00582b35
    ADD ESP,0xa0                        ; 00582b36
    POP EBP                             ; 00582b3c
    RET                                 ; 00582b3d

