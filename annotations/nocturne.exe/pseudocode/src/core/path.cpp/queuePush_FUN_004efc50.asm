; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction)
;
; Parameters:
; int              Stack[0x4]:4   grid_x
; int              Stack[0x8]:4   cost
; int              Stack[0xc]:4   grid_z
; char             Stack[0x10]:1   direction
;
; Referenced Globals:
;   undefined4 DAT_01e3162c
;   undefined4 DAT_01e31630
;   undefined4 DAT_01e31634
;   undefined4 DAT_01e40090
;   undefined4 DAT_01e4280c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efc50
        ;   Label: core_path.cpp_queuePush_FUN_004efc50
    MOV ECX,dword ptr [0x01e40090]      ; 004efc51 | DAT_01e40090
    MOV EDX,dword ptr [ESP + 0x10]      ; 004efc57
    LEA EAX,[EDX*0x4 + 0x0]             ; 004efc5b
    SUB EAX,EDX                         ; 004efc62
    SHL EAX,0x3                         ; 004efc64
    ADD EAX,EDX                         ; 004efc67
    MOV EDX,dword ptr [ESP + 0x8]       ; 004efc69
    SHL EAX,0x2                         ; 004efc6d
    ADD EAX,EDX                         ; 004efc70
    MOV DL,byte ptr [ESP + 0x14]        ; 004efc72
    MOV byte ptr [EAX + 0x1e40098],DL   ; 004efc76
    LEA EAX,[ECX*0x4 + 0x0]             ; 004efc7c
    MOV EBX,dword ptr [0x01e4280c]      ; 004efc83 | DAT_01e4280c
    SUB EAX,ECX                         ; 004efc89
    MOV EDX,dword ptr [ESP + 0x8]       ; 004efc8b
    INC EBX                             ; 004efc8f
    MOV dword ptr [EAX*0x4 + 0x1e3162c],EDX ; 004efc90 | DAT_01e3162c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004efc97
    MOV dword ptr [0x01e4280c],EBX      ; 004efc9b | DAT_01e4280c
    MOV dword ptr [EAX*0x4 + 0x1e31630],EDX ; 004efca1 | DAT_01e31630
    MOV EDX,dword ptr [ESP + 0x10]      ; 004efca8
    INC ECX                             ; 004efcac
    MOV dword ptr [EAX*0x4 + 0x1e31634],EDX ; 004efcad | DAT_01e31634
    CMP ECX,0x1388                      ; 004efcb4
    JL 0x004efcbe                       ; 004efcba
        ;   XREF to: 004efcbe (CONDITIONAL_JUMP)  ; LAB_004efcbe
    XOR ECX,ECX                         ; 004efcbc
    MOV dword ptr [0x01e40090],ECX      ; 004efcbe | DAT_01e40090
        ;   Label: LAB_004efcbe
    POP EBX                             ; 004efcc4
    RET                                 ; 004efcc5

