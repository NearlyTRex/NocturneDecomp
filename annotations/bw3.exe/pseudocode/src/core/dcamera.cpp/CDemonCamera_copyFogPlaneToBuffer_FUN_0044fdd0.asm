; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0(CDemonCamera *this_ptr,int plane_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044fa98
;
; Referenced Globals:
;   undefined4 DAT_0135ead1
;   undefined4 DAT_0135ead2
;   undefined4 DAT_0135ec10
;   undefined4 DAT_0135ec11
;   undefined4 DAT_0135ec12
;   undefined4 DAT_0135ed51
;   undefined4 DAT_01371810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fdd0
        ;   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0
    PUSH ESI                            ; 0044fdd1
    PUSH EDI                            ; 0044fdd2
    PUSH EBP                            ; 0044fdd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044fdd4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044fdd8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044fddc
    ADD EAX,EDX                         ; 0044fde3
    SHL EAX,0xa                         ; 0044fde5
    MOV EDX,EAX                         ; 0044fde8
    SHL EAX,0x4                         ; 0044fdea
    SUB EAX,EDX                         ; 0044fded
    MOV EDI,0x1                         ; 0044fdef
    LEA EBP,[EAX + 0x140]               ; 0044fdf4
    MOV EAX,dword ptr [ESI + 0x154]     ; 0044fdfa
        ;   Label: LAB_0044fdfa
    DEC EAX                             ; 0044fe00
    CMP EDI,EAX                         ; 0044fe01
    JGE 0x0044fe3a                      ; 0044fe03
        ;   XREF to: 0044fe3a (CONDITIONAL_JUMP)  ; LAB_0044fe3a
    IMUL ECX,EDI,0x140                  ; 0044fe05
    MOV EDX,0x1                         ; 0044fe0b
    LEA EAX,[EDX + EBP*0x1]             ; 0044fe10
    ADD ECX,EDX                         ; 0044fe13
    MOV EBX,dword ptr [ESI + 0x150]     ; 0044fe15
        ;   Label: LAB_0044fe15
    DEC EBX                             ; 0044fe1b
    CMP EDX,EBX                         ; 0044fe1c
    JGE 0x0044fe31                      ; 0044fe1e
        ;   XREF to: 0044fe31 (CONDITIONAL_JUMP)  ; LAB_0044fe31
    INC EAX                             ; 0044fe20
    MOV BL,byte ptr [ECX + 0x135ead0]   ; 0044fe21 | DAT_0135ec11 | DAT_0135ec12 | DAT_0135ed51
    INC ECX                             ; 0044fe27
    INC EDX                             ; 0044fe28
    MOV byte ptr [EAX + 0x13716cf],BL   ; 0044fe29
    JMP 0x0044fe15                      ; 0044fe2f
        ;   XREF to: 0044fe15 (UNCONDITIONAL_JUMP)  ; LAB_0044fe15
    INC EDI                             ; 0044fe31
        ;   Label: LAB_0044fe31
    ADD EBP,0x140                       ; 0044fe32
    JMP 0x0044fdfa                      ; 0044fe38
        ;   XREF to: 0044fdfa (UNCONDITIONAL_JUMP)  ; LAB_0044fdfa
    MOV EDX,dword ptr [ESI + 0x154]     ; 0044fe3a
        ;   Label: LAB_0044fe3a
    XOR EAX,EAX                         ; 0044fe40
    TEST EDX,EDX                        ; 0044fe42
    JLE 0x0044fea0                      ; 0044fe44
        ;   XREF to: 0044fea0 (CONDITIONAL_JUMP)  ; LAB_0044fea0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044fe46
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044fe4a
    ADD EDX,ECX                         ; 0044fe51
    SHL EDX,0xa                         ; 0044fe53
    MOV ECX,EDX                         ; 0044fe56
    SHL EDX,0x4                         ; 0044fe58
    SUB EDX,ECX                         ; 0044fe5b
    IMUL EBX,EAX,0x140                  ; 0044fe5d
        ;   Label: LAB_0044fe5d
    MOV CL,byte ptr [EBX + 0x135ead0]   ; 0044fe63 | DAT_0135ec10
    MOV byte ptr [EDX + 0x13716d0],CL   ; 0044fe69 | DAT_01371810
    MOV ECX,dword ptr [ESI + 0x150]     ; 0044fe6f
    MOV BL,byte ptr [ECX + EBX*0x1 + 0x135eacf] ; 0044fe75
    MOV byte ptr [ECX + EDX*0x1 + 0x13716cf],BL ; 0044fe7c
    INC EAX                             ; 0044fe83
    MOV ECX,dword ptr [ESI + 0x154]     ; 0044fe84
    ADD EDX,0x140                       ; 0044fe8a
    CMP EAX,ECX                         ; 0044fe90
    JL 0x0044fe5d                       ; 0044fe92
        ;   XREF to: 0044fe5d (CONDITIONAL_JUMP)  ; LAB_0044fe5d
    LEA EAX,[EAX]                       ; 0044fe94
    LEA EDX,[EDX]                       ; 0044fe9a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044fea0
        ;   Label: LAB_0044fea0
    LEA EDI,[EDX*0x4 + 0x0]             ; 0044fea4
    ADD EDI,EDX                         ; 0044feab
    SHL EDI,0xa                         ; 0044fead
    MOV EDX,EDI                         ; 0044feb0
    SHL EDI,0x4                         ; 0044feb2
    MOV EAX,0x1                         ; 0044feb5
    SUB EDI,EDX                         ; 0044feba
    MOV EBP,0xffffffff                  ; 0044febc
    LEA EDX,[EDI + EAX*0x1]             ; 0044fec1
    MOV ECX,dword ptr [ESI + 0x150]     ; 0044fec4
        ;   Label: LAB_0044fec4
    ADD ECX,EBP                         ; 0044feca
    CMP EAX,ECX                         ; 0044fecc
    JGE 0x0044fd34                      ; 0044fece
        ;   XREF to: 0044fd34 (CONDITIONAL_JUMP)  ; LAB_0044fd34
    MOV BL,byte ptr [EAX + 0x135ead0]   ; 0044fed4 | DAT_0135ead1 | DAT_0135ead2
    MOV byte ptr [EDX + 0x13716d0],BL   ; 0044feda
    MOV ECX,dword ptr [ESI + 0x154]     ; 0044fee0
    DEC ECX                             ; 0044fee6
    IMUL ECX,ECX,0x140                  ; 0044fee7
    LEA EBX,[ECX + EAX*0x1]             ; 0044feed
    INC EAX                             ; 0044fef0
    ADD ECX,EDI                         ; 0044fef1
    MOV BL,byte ptr [EBX + 0x135ead0]   ; 0044fef3 | DAT_0135ead1 | DAT_0135ead2
    INC EDX                             ; 0044fef9
    MOV byte ptr [ECX + EAX*0x1 + 0x13716cf],BL ; 0044fefa
    JMP 0x0044fec4                      ; 0044ff01
        ;   XREF to: 0044fec4 (UNCONDITIONAL_JUMP)  ; LAB_0044fec4

