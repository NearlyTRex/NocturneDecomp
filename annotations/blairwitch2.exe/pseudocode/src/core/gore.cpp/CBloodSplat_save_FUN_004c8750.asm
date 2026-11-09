; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004c8750(CBloodSplat *this_ptr,_FILE *file_handle)
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
;   core_gore.cpp_CGore_save_FUN_004c9f20 at 004c9fa8
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d94a6
;   TerminatedCString s_d_d_d_005d94b0
;   TerminatedCString s_f_f_f_005d94ba
;   TerminatedCString s_d_d_d_d_d_d_d_005d94c4
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8750
        ;   Label: core_gore.cpp_CBloodSplat_save_FUN_004c8750
    PUSH ESI                            ; 004c8751
    PUSH EDI                            ; 004c8752
    PUSH EBP                            ; 004c8753
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8754
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c8758
    SUB ESP,0x8                         ; 004c875c
    FLD float ptr [EBX + 0xc]           ; 004c875f
    FSTP double ptr [ESP]               ; 004c8762
    SUB ESP,0x8                         ; 004c8765
    FLD float ptr [EBX + 0x8]           ; 004c8768
    FSTP double ptr [ESP]               ; 004c876b
    SUB ESP,0x8                         ; 004c876e
    FLD float ptr [EBX + 0x4]           ; 004c8771
    FSTP double ptr [ESP]               ; 004c8774
    PUSH 0x5d94a6                       ; 004c8777 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c877c
    CALL crt_unknown.c_FUN_005b8010     ; 004c877d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 004c8782
    MOV EDX,dword ptr [EBX]             ; 004c8785
    PUSH EDX                            ; 004c8787
    MOV ECX,dword ptr [EBX + 0x14]      ; 004c8788
    PUSH ECX                            ; 004c878b
    MOV EDI,dword ptr [EBX + 0x10]      ; 004c878c
    PUSH EDI                            ; 004c878f
    PUSH 0x5d94b0                       ; 004c8790 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004c8795
    CALL crt_unknown.c_FUN_005b8010     ; 004c8796
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 004c879b
    SUB ESP,0x8                         ; 004c879e
    FLD float ptr [EBX + 0x1c]          ; 004c87a1
    FSTP double ptr [ESP]               ; 004c87a4
    SUB ESP,0x8                         ; 004c87a7
    FLD float ptr [EBX + 0x20]          ; 004c87aa
    FSTP double ptr [ESP]               ; 004c87ad
    SUB ESP,0x8                         ; 004c87b0
    FLD float ptr [EBX + 0x18]          ; 004c87b3
    FSTP double ptr [ESP]               ; 004c87b6
    PUSH 0x5d94ba                       ; 004c87b9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c87be
    CALL crt_unknown.c_FUN_005b8010     ; 004c87bf
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 004c87c4
    MOV EBP,dword ptr [EBX + 0x40]      ; 004c87c7
    PUSH EBP                            ; 004c87ca
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004c87cb
    PUSH EAX                            ; 004c87ce
    MOV EDX,dword ptr [EBX + 0x38]      ; 004c87cf
    PUSH EDX                            ; 004c87d2
    MOV ECX,dword ptr [EBX + 0x34]      ; 004c87d3
    PUSH ECX                            ; 004c87d6
    MOV EDI,dword ptr [EBX + 0x30]      ; 004c87d7
    PUSH EDI                            ; 004c87da
    MOV EBP,dword ptr [EBX + 0x2c]      ; 004c87db
    PUSH EBP                            ; 004c87de
    MOV EAX,dword ptr [EBX + 0x28]      ; 004c87df
    PUSH EAX                            ; 004c87e2
    PUSH 0x5d94c4                       ; 004c87e3 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004c87e8
    CALL crt_unknown.c_FUN_005b8010     ; 004c87e9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x24                        ; 004c87ee
    POP EBP                             ; 004c87f1
    POP EDI                             ; 004c87f2
    POP ESI                             ; 004c87f3
    POP EBX                             ; 004c87f4
    RET                                 ; 004c87f5

