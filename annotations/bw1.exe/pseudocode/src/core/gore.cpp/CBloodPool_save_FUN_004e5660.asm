; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_save_FUN_004e5660(CBloodPool *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_save_FUN_004e6730 at 004e676f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005e40f2
;   TerminatedCString s_d_d_005e40fc
;   TerminatedCString s_d_f_d_d_d_005e4103
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5660
        ;   Label: core_gore.cpp_CBloodPool_save_FUN_004e5660
    PUSH ESI                            ; 004e5661
    PUSH EDI                            ; 004e5662
    PUSH EBP                            ; 004e5663
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e5664
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e5668
    SUB ESP,0x8                         ; 004e566c
    FLD float ptr [EBX + 0xc]           ; 004e566f
    FSTP double ptr [ESP]               ; 004e5672
    SUB ESP,0x8                         ; 004e5675
    FLD float ptr [EBX + 0x8]           ; 004e5678
    FSTP double ptr [ESP]               ; 004e567b
    SUB ESP,0x8                         ; 004e567e
    FLD float ptr [EBX + 0x4]           ; 004e5681
    FSTP double ptr [ESP]               ; 004e5684
    PUSH 0x5e40f2                       ; 004e5687 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e568c
    CALL crt_unknown.c_FUN_005c03c0     ; 004e568d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004e5692
    MOV EDX,dword ptr [EBX + 0x10]      ; 004e5695
    PUSH EDX                            ; 004e5698
    MOV ECX,dword ptr [EBX]             ; 004e5699
    PUSH ECX                            ; 004e569b
    PUSH 0x5e40fc                       ; 004e569c | = "%d,%d\n"
    PUSH ESI                            ; 004e56a1
    CALL crt_unknown.c_FUN_005c03c0     ; 004e56a2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 004e56a7
    MOV EDI,dword ptr [EBX + 0x24]      ; 004e56aa
    PUSH EDI                            ; 004e56ad
    MOV EBP,dword ptr [EBX + 0x20]      ; 004e56ae
    PUSH EBP                            ; 004e56b1
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004e56b2
    PUSH EAX                            ; 004e56b5
    SUB ESP,0x8                         ; 004e56b6
    FLD float ptr [EBX + 0x18]          ; 004e56b9
    FSTP double ptr [ESP]               ; 004e56bc
    MOV EDX,dword ptr [EBX + 0x14]      ; 004e56bf
    PUSH EDX                            ; 004e56c2
    PUSH 0x5e4103                       ; 004e56c3 | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004e56c8
    CALL crt_unknown.c_FUN_005c03c0     ; 004e56c9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004e56ce
    POP EBP                             ; 004e56d1
    POP EDI                             ; 004e56d2
    POP ESI                             ; 004e56d3
    POP EBX                             ; 004e56d4
    RET                                 ; 004e56d5

