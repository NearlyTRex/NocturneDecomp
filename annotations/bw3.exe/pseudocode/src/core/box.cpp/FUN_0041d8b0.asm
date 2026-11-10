; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_0041d8b0(undefined4 *param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[9]:
;   core_actor.cpp_FUN_00408f00 at 00408f69
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 at 0041e9dc
;   core_box.cpp_FUN_0041dcd0 at 0041dcfd
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534cb2
;   core_setcolid.cpp_FUN_0053bc80 at 0053c07b
;   core_setcolid.cpp_FUN_0053da90 at 0053dacb
;   core_setdir.cpp_FUN_0053f940 at 0053fa72
;   core_skeleton.cpp_FUN_0054fa00 at 0054fad1
;   core_spike.cpp_FUN_00566fd0 at 005670b9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d8b0
        ;   Label: core_box.cpp_FUN_0041d8b0
    PUSH EDI                            ; 0041d8b1
    SUB ESP,0x18                        ; 0041d8b2
    MOV EDX,dword ptr [ESP + 0x24]      ; 0041d8b5
    MOV ECX,dword ptr [ESP + 0x28]      ; 0041d8b9
    MOV EAX,ESI                         ; 0041d8bd
    TEST CL,0x1                         ; 0041d8bf
    JNZ 0x0041d906                      ; 0041d8c2
        ;   XREF to: 0041d906 (CONDITIONAL_JUMP)  ; LAB_0041d906
    MOV EBX,dword ptr [EDX]             ; 0041d8c4
    MOV dword ptr [ESP + 0xc],EBX       ; 0041d8c6
        ;   Label: LAB_0041d8c6
    MOV EBX,dword ptr [ESP + 0xc]       ; 0041d8ca
    MOV dword ptr [ESP],EBX             ; 0041d8ce
    TEST CL,0x2                         ; 0041d8d1
    JZ 0x0041d90b                       ; 0041d8d4
        ;   XREF to: 0041d90b (CONDITIONAL_JUMP)  ; LAB_0041d90b
    MOV EBX,dword ptr [EDX + 0x10]      ; 0041d8d6
    MOV dword ptr [ESP + 0x10],EBX      ; 0041d8d9
        ;   Label: LAB_0041d8d9
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041d8dd
    MOV dword ptr [ESP + 0x4],EBX       ; 0041d8e1
    TEST CL,0x4                         ; 0041d8e5
    JZ 0x0041d910                       ; 0041d8e8
        ;   XREF to: 0041d910 (CONDITIONAL_JUMP)  ; LAB_0041d910
    MOV EDX,dword ptr [EDX + 0x14]      ; 0041d8ea
    MOV dword ptr [ESP + 0x14],EDX      ; 0041d8ed
        ;   Label: LAB_0041d8ed
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041d8f1
    MOV ESI,ESP                         ; 0041d8f5
    MOV EDI,EAX                         ; 0041d8f7
    MOV dword ptr [ESP + 0x8],EDX       ; 0041d8f9
    MOVSD ES:EDI,ESI                    ; 0041d8fd
    MOVSD ES:EDI,ESI                    ; 0041d8fe
    MOVSD ES:EDI,ESI                    ; 0041d8ff
    ADD ESP,0x18                        ; 0041d900
    POP EDI                             ; 0041d903
    POP EBX                             ; 0041d904
    RET                                 ; 0041d905
    MOV EBX,dword ptr [EDX + 0xc]       ; 0041d906
        ;   Label: LAB_0041d906
    JMP 0x0041d8c6                      ; 0041d909
        ;   XREF to: 0041d8c6 (UNCONDITIONAL_JUMP)  ; LAB_0041d8c6
    MOV EBX,dword ptr [EDX + 0x4]       ; 0041d90b
        ;   Label: LAB_0041d90b
    JMP 0x0041d8d9                      ; 0041d90e
        ;   XREF to: 0041d8d9 (UNCONDITIONAL_JUMP)  ; LAB_0041d8d9
    MOV EDX,dword ptr [EDX + 0x8]       ; 0041d910
        ;   Label: LAB_0041d910
    JMP 0x0041d8ed                      ; 0041d913
        ;   XREF to: 0041d8ed (UNCONDITIONAL_JUMP)  ; LAB_0041d8ed

