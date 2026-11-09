; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_save_FUN_004e6730 at 004e67b8
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005e4089
;   TerminatedCString s_d_d_d_005e4093
;   TerminatedCString s_f_f_f_005e409d
;   TerminatedCString s_d_d_d_d_d_d_d_005e40a7
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5030
        ;   Label: core_gore.cpp_CBloodSplat_save_FUN_004e5030
    PUSH ESI                            ; 004e5031
    PUSH EDI                            ; 004e5032
    PUSH EBP                            ; 004e5033
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e5034
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e5038
    SUB ESP,0x8                         ; 004e503c
    FLD float ptr [EBX + 0xc]           ; 004e503f
    FSTP double ptr [ESP]               ; 004e5042
    SUB ESP,0x8                         ; 004e5045
    FLD float ptr [EBX + 0x8]           ; 004e5048
    FSTP double ptr [ESP]               ; 004e504b
    SUB ESP,0x8                         ; 004e504e
    FLD float ptr [EBX + 0x4]           ; 004e5051
    FSTP double ptr [ESP]               ; 004e5054
    PUSH 0x5e4089                       ; 004e5057 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e505c
    CALL crt_unknown.c_FUN_005c03c0     ; 004e505d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004e5062
    MOV EDX,dword ptr [EBX]             ; 004e5065
    PUSH EDX                            ; 004e5067
    MOV ECX,dword ptr [EBX + 0x14]      ; 004e5068
    PUSH ECX                            ; 004e506b
    MOV EDI,dword ptr [EBX + 0x10]      ; 004e506c
    PUSH EDI                            ; 004e506f
    PUSH 0x5e4093                       ; 004e5070 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004e5075
    CALL crt_unknown.c_FUN_005c03c0     ; 004e5076
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 004e507b
    SUB ESP,0x8                         ; 004e507e
    FLD float ptr [EBX + 0x1c]          ; 004e5081
    FSTP double ptr [ESP]               ; 004e5084
    SUB ESP,0x8                         ; 004e5087
    FLD float ptr [EBX + 0x20]          ; 004e508a
    FSTP double ptr [ESP]               ; 004e508d
    SUB ESP,0x8                         ; 004e5090
    FLD float ptr [EBX + 0x18]          ; 004e5093
    FSTP double ptr [ESP]               ; 004e5096
    PUSH 0x5e409d                       ; 004e5099 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e509e
    CALL crt_unknown.c_FUN_005c03c0     ; 004e509f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004e50a4
    MOV EBP,dword ptr [EBX + 0x40]      ; 004e50a7
    PUSH EBP                            ; 004e50aa
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004e50ab
    PUSH EAX                            ; 004e50ae
    MOV EDX,dword ptr [EBX + 0x38]      ; 004e50af
    PUSH EDX                            ; 004e50b2
    MOV ECX,dword ptr [EBX + 0x34]      ; 004e50b3
    PUSH ECX                            ; 004e50b6
    MOV EDI,dword ptr [EBX + 0x30]      ; 004e50b7
    PUSH EDI                            ; 004e50ba
    MOV EBP,dword ptr [EBX + 0x2c]      ; 004e50bb
    PUSH EBP                            ; 004e50be
    MOV EAX,dword ptr [EBX + 0x28]      ; 004e50bf
    PUSH EAX                            ; 004e50c2
    PUSH 0x5e40a7                       ; 004e50c3 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004e50c8
    CALL crt_unknown.c_FUN_005c03c0     ; 004e50c9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 004e50ce
    POP EBP                             ; 004e50d1
    POP EDI                             ; 004e50d2
    POP ESI                             ; 004e50d3
    POP EBX                             ; 004e50d4
    RET                                 ; 004e50d5

