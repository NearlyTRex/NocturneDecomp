; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bwspart_cpp_FUN_005a84c0(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050 at 005a8095
;   core_bwspart.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50 at 005a7fdf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a84c0
        ;   Label: core_bwspart.cpp_FUN_005a84c0
    PUSH EDI                            ; 005a84c1
    SUB ESP,0x30                        ; 005a84c2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005a84c5
    MOV dword ptr [EDX],0x0             ; 005a84c9
    MOV dword ptr [EDX + 0x58],0x3dcccccd ; 005a84cf
    MOV dword ptr [EDX + 0x5c],0x3dcccccd ; 005a84d6
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 005a84dd
    MOV dword ptr [EDX + 0xc],0x3f800000 ; 005a84e4
    MOV dword ptr [EDX + 0x10],0x0      ; 005a84eb
    MOV dword ptr [EDX + 0x18],0x3dcccccd ; 005a84f2
    MOV dword ptr [EDX + 0x1c],0x3dcccccd ; 005a84f9
    LEA EAX,[ESP + 0x18]                ; 005a8500
    MOV dword ptr [EDX + 0x20],0x0      ; 005a8504
    XOR ECX,ECX                         ; 005a850b
    MOV EBX,dword ptr [EDX + 0xc]       ; 005a850d
    MOV dword ptr [EDX + 0x14],EBX      ; 005a8510
    MOV dword ptr [ESP + 0x18],ECX      ; 005a8513
    MOV dword ptr [ESP + 0x1c],ECX      ; 005a8517
    MOV dword ptr [ESP + 0x20],ECX      ; 005a851b
    LEA ECX,[EDX + 0x24]                ; 005a851f
    CMP ECX,EAX                         ; 005a8522
    JNZ 0x005a8593                      ; 005a8524
        ;   XREF to: 005a8593 (CONDITIONAL_JUMP)  ; LAB_005a8593
    LEA EAX,[ESP + 0x24]                ; 005a8526
        ;   Label: LAB_005a8526
    XOR EDI,EDI                         ; 005a852a
    LEA ECX,[EDX + 0x30]                ; 005a852c
    MOV dword ptr [ESP + 0x28],EDI      ; 005a852f
    MOV dword ptr [ESP + 0x2c],EDI      ; 005a8533
    MOV dword ptr [ESP + 0x24],EDI      ; 005a8537
    CMP ECX,EAX                         ; 005a853b
    JZ 0x005a8547                       ; 005a853d
        ;   XREF to: 005a8547 (CONDITIONAL_JUMP)  ; LAB_005a8547
    MOV dword ptr [ECX + 0x4],EDI       ; 005a853f
    MOV dword ptr [ECX + 0x8],EDI       ; 005a8542
    MOV dword ptr [ECX],EDI             ; 005a8545
    XOR ECX,ECX                         ; 005a8547
        ;   Label: LAB_005a8547
    MOV EAX,ESP                         ; 005a8549
    MOV dword ptr [ESP + 0x4],ECX       ; 005a854b
    MOV dword ptr [ESP + 0x8],ECX       ; 005a854f
    MOV dword ptr [ESP],ECX             ; 005a8553
    LEA ECX,[EDX + 0x3c]                ; 005a8556
    CMP ECX,EAX                         ; 005a8559
    JZ 0x005a8571                       ; 005a855b
        ;   XREF to: 005a8571 (CONDITIONAL_JUMP)  ; LAB_005a8571
    MOV dword ptr [ECX],0x0             ; 005a855d
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8563
    MOV dword ptr [ECX + 0x4],EAX       ; 005a8567
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a856a
    MOV dword ptr [ECX + 0x8],EAX       ; 005a856e
    MOV EDI,0x3f800000                  ; 005a8571
        ;   Label: LAB_005a8571
    LEA EAX,[ESP + 0xc]                 ; 005a8576
    ADD EDX,0x48                        ; 005a857a
    MOV dword ptr [ESP + 0x10],EDI      ; 005a857d
    MOV dword ptr [ESP + 0x14],EDI      ; 005a8581
    MOV dword ptr [ESP + 0xc],EDI       ; 005a8585
    CMP EDX,EAX                         ; 005a8589
    JNZ 0x005a85ac                      ; 005a858b
        ;   XREF to: 005a85ac (CONDITIONAL_JUMP)  ; LAB_005a85ac
    ADD ESP,0x30                        ; 005a858d
    POP EDI                             ; 005a8590
    POP EBX                             ; 005a8591
    RET                                 ; 005a8592
    MOV dword ptr [ECX],0x0             ; 005a8593
        ;   Label: LAB_005a8593
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a8599
    MOV dword ptr [ECX + 0x4],EAX       ; 005a859d
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a85a0
    MOV dword ptr [ECX + 0x8],EAX       ; 005a85a4
    JMP 0x005a8526                      ; 005a85a7
        ;   XREF to: 005a8526 (UNCONDITIONAL_JUMP)  ; LAB_005a8526
    MOV dword ptr [EDX + 0x4],EDI       ; 005a85ac
        ;   Label: LAB_005a85ac
    MOV dword ptr [EDX + 0x8],EDI       ; 005a85af
    MOV dword ptr [EDX],EDI             ; 005a85b2
    ADD ESP,0x30                        ; 005a85b4
    POP EDI                             ; 005a85b7
    POP EBX                             ; 005a85b8
    RET                                 ; 005a85b9

