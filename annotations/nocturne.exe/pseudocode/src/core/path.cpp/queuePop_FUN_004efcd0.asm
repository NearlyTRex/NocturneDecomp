; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z)
;
; Parameters:
; int *            Stack[0x4]:4   out_x
; int *            Stack[0x8]:4   out_cost
; int *            Stack[0xc]:4   out_z
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0058cc6f
;   TerminatedCString s_queuePop_empty_queue_0058cc80
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e3162c
;   undefined4 DAT_01e31630
;   undefined4 DAT_01e31634
;   undefined4 DAT_01e4008c
;   undefined4 DAT_01e40090
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efcd0
        ;   Label: core_path.cpp_queuePop_FUN_004efcd0
    MOV EBX,dword ptr [0x01e4008c]      ; 004efcd1 | DAT_01e4008c
    CMP EBX,dword ptr [0x01e40090]      ; 004efcd7 | DAT_01e40090
    JZ 0x004efd28                       ; 004efcdd
        ;   XREF to: 004efd28 (CONDITIONAL_JUMP)  ; LAB_004efd28
    MOV EBX,dword ptr [0x01e4008c]      ; 004efcdf | DAT_01e4008c
        ;   Label: LAB_004efcdf
    LEA EAX,[EBX*0x4 + 0x0]             ; 004efce5
    SUB EAX,EBX                         ; 004efcec
    MOV ECX,dword ptr [ESP + 0x8]       ; 004efcee
    MOV EDX,dword ptr [EAX*0x4 + 0x1e3162c] ; 004efcf2 | DAT_01e3162c
    MOV dword ptr [ECX],EDX             ; 004efcf9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004efcfb
    MOV EDX,dword ptr [EAX*0x4 + 0x1e31630] ; 004efcff | DAT_01e31630
    MOV dword ptr [ECX],EDX             ; 004efd06
    MOV EDX,dword ptr [ESP + 0x10]      ; 004efd08
    MOV EAX,dword ptr [EAX*0x4 + 0x1e31634] ; 004efd0c | DAT_01e31634
    INC EBX                             ; 004efd13
    MOV dword ptr [EDX],EAX             ; 004efd14
    CMP EBX,0x1388                      ; 004efd16
    JL 0x004efd20                       ; 004efd1c
        ;   XREF to: 004efd20 (CONDITIONAL_JUMP)  ; LAB_004efd20
    XOR EBX,EBX                         ; 004efd1e
    MOV dword ptr [0x01e4008c],EBX      ; 004efd20 | DAT_01e4008c
        ;   Label: LAB_004efd20
    POP EBX                             ; 004efd26
    RET                                 ; 004efd27
    PUSH ESI                            ; 004efd28
        ;   Label: LAB_004efd28
    MOV ECX,0x58cc6f                    ; 004efd29 | = "..\\core\\path.cpp"
    MOV ESI,0xdf                        ; 004efd2e
    PUSH 0x58cc80                       ; 004efd33 | = "queuePop - empty queue?!"
    MOV dword ptr [0x01cc4800],ECX      ; 004efd38 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004efd3e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004efd44
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004efd49
    POP ESI                             ; 004efd4c
    JMP 0x004efcdf                      ; 004efd4d
        ;   XREF to: 004efcdf (UNCONDITIONAL_JUMP)  ; LAB_004efcdf

