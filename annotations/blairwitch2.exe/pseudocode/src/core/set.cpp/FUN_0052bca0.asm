; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0052bca0(int param_1)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0200a3a4
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bca0
        ;   Label: core_set.cpp_FUN_0052bca0
    PUSH ESI                            ; 0052bca1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052bca2
    MOV EDX,dword ptr [0x0200a3a4]      ; 0052bca6 | DAT_0200a3a4
    MOV EBX,dword ptr [EAX + 0x10c]     ; 0052bcac
    MOV ECX,dword ptr [EAX + 0x110]     ; 0052bcb2
    MOV ESI,dword ptr [EAX + 0x108]     ; 0052bcb8
    CMP EAX,EDX                         ; 0052bcbe
    JNZ 0x0052bcfe                      ; 0052bcc0
        ;   XREF to: 0052bcfe (CONDITIONAL_JUMP)  ; LAB_0052bcfe
    LEA EDX,[ESI*0x4 + 0x0]             ; 0052bcc2
    SUB EDX,ESI                         ; 0052bcc9
    MOV EAX,EDX                         ; 0052bccb
    SAR EDX,0x1f                        ; 0052bccd
    SUB EAX,EDX                         ; 0052bcd0
    SAR EAX,0x1                         ; 0052bcd2
    LEA EDX,[EBX*0x4 + 0x0]             ; 0052bcd4
    SUB EDX,EBX                         ; 0052bcdb
    MOV ESI,EAX                         ; 0052bcdd
    MOV EAX,EDX                         ; 0052bcdf
    SAR EDX,0x1f                        ; 0052bce1
    SUB EAX,EDX                         ; 0052bce4
    SAR EAX,0x1                         ; 0052bce6
    LEA EDX,[ECX*0x4 + 0x0]             ; 0052bce8
    SUB EDX,ECX                         ; 0052bcef
    MOV EBX,EAX                         ; 0052bcf1
    MOV EAX,EDX                         ; 0052bcf3
    SAR EDX,0x1f                        ; 0052bcf5
    SUB EAX,EDX                         ; 0052bcf8
    SAR EAX,0x1                         ; 0052bcfa
    MOV ECX,EAX                         ; 0052bcfc
    PUSH ECX                            ; 0052bcfe
        ;   Label: LAB_0052bcfe
    PUSH EBX                            ; 0052bcff
    PUSH ESI                            ; 0052bd00
    MOV ECX,dword ptr [0x0061b5a8]      ; 0052bd01 | g_CDemonSetPtr
    PUSH ECX                            ; 0052bd07
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 0052bd08
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0052bd0d
    POP ESI                             ; 0052bd10
    POP EBX                             ; 0052bd11
    RET                                 ; 0052bd12

