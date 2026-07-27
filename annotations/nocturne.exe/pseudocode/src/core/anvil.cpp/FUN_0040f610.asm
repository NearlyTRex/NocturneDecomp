; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_anvil_cpp_FUN_0040f610(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00578410 = 32
;   double DOUBLE_00578418 = 6
;   undefined4 DAT_005b7650
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f610
        ;   Label: core_anvil.cpp_FUN_0040f610
    SUB ESP,0x44                        ; 0040f611
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0040f614
    LEA EAX,[EBX + 0x2cc]               ; 0040f618
    PUSH EAX                            ; 0040f61e
    MOV EDX,dword ptr [0x005b7650]      ; 0040f61f | DAT_005b7650
    PUSH EDX                            ; 0040f625
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0040f626
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 0040f62b
    TEST EAX,EAX                        ; 0040f62e
    JNZ 0x0040f6a3                      ; 0040f630
        ;   XREF to: 0040f6a3 (CONDITIONAL_JUMP)  ; LAB_0040f6a3
    CMP dword ptr [EBX + 0x334],0x0     ; 0040f632
        ;   Label: LAB_0040f632
    JZ 0x0040f69e                       ; 0040f639
        ;   XREF to: 0040f69e (CONDITIONAL_JUMP)  ; LAB_0040f69e
    FLD float ptr [ESP + 0x50]          ; 0040f63b
    FMUL double ptr [0x00578410]        ; 0040f63f | DOUBLE_00578410
    FSUBR float ptr [EBX + 0x338]       ; 0040f645
    FST float ptr [EBX + 0x338]         ; 0040f64b
    FADD float ptr [EBX + 0x24]         ; 0040f651
    MOV EDX,dword ptr [0x01cae0e8]      ; 0040f654 | DAT_01cae0e8
    FSTP float ptr [EBX + 0x24]         ; 0040f65a
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0040f65d
    FLD float ptr [EBX + 0x24]          ; 0040f664
    FCOMP float ptr [EDX + 0x24]        ; 0040f667
    FNSTSW AX                           ; 0040f66a
    SAHF                                ; 0040f66c
    JNC 0x0040f67f                      ; 0040f66d
        ;   XREF to: 0040f67f (CONDITIONAL_JUMP)  ; LAB_0040f67f
    MOV EAX,dword ptr [EDX + 0x24]      ; 0040f66f
    MOV dword ptr [EBX + 0x24],EAX      ; 0040f672
    MOV dword ptr [EBX + 0x338],0x0     ; 0040f675
    MOV EAX,[0x01cae0e8]                ; 0040f67f | DAT_01cae0e8
        ;   Label: LAB_0040f67f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0040f684
    FLD float ptr [EAX + 0x24]          ; 0040f68b
    FADD double ptr [0x00578418]        ; 0040f68e | DOUBLE_00578418
    FLD float ptr [EBX + 0x24]          ; 0040f694
    FCOMPP                              ; 0040f697
    FNSTSW AX                           ; 0040f699
    SAHF                                ; 0040f69b
    JC 0x0040f6e4                       ; 0040f69c
        ;   XREF to: 0040f6e4 (CONDITIONAL_JUMP)  ; LAB_0040f6e4
    ADD ESP,0x44                        ; 0040f69e
        ;   Label: LAB_0040f69e
    POP EBX                             ; 0040f6a1
    RET                                 ; 0040f6a2
    MOV EAX,[0x01cae0e8]                ; 0040f6a3 | DAT_01cae0e8
        ;   Label: LAB_0040f6a3
    MOV dword ptr [EBX + 0x334],0x1     ; 0040f6a8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0040f6b2
    LEA EDX,[EBX + 0x20]                ; 0040f6b9
    MOV ECX,dword ptr [EAX + 0x20]      ; 0040f6bc
    MOV dword ptr [EDX],ECX             ; 0040f6bf
    MOV ECX,dword ptr [EAX + 0x24]      ; 0040f6c1
    MOV dword ptr [EDX + 0x4],ECX       ; 0040f6c4
    MOV ECX,dword ptr [EAX + 0x28]      ; 0040f6c7
    MOV dword ptr [EDX + 0x8],ECX       ; 0040f6ca
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0040f6cd
    MOV dword ptr [EDX + 0xc],EAX       ; 0040f6d0
    FLD float ptr [EBX + 0x330]         ; 0040f6d3
    FADD float ptr [EBX + 0x24]         ; 0040f6d9
    FSTP float ptr [EBX + 0x24]         ; 0040f6dc
    JMP 0x0040f632                      ; 0040f6df
        ;   XREF to: 0040f632 (UNCONDITIONAL_JUMP)  ; LAB_0040f632
    PUSH EDI                            ; 0040f6e4
        ;   Label: LAB_0040f6e4
    PUSH ESI                            ; 0040f6e5
    LEA EAX,[ESP + 0x8]                 ; 0040f6e6
    PUSH EAX                            ; 0040f6ea
    MOV ESI,0x461c3f9a                  ; 0040f6eb
    MOV EDI,0x8                         ; 0040f6f0
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040f6f5
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    LEA EDX,[ESP + 0xc]                 ; 0040f6fa
    ADD ESP,0x4                         ; 0040f6fe
    MOV EAX,[0x01cae0e8]                ; 0040f701 | DAT_01cae0e8
    MOV dword ptr [ESP + 0xc],ESI       ; 0040f706
    MOV dword ptr [ESP + 0x38],EDI      ; 0040f70a
    MOV dword ptr [ESP + 0x3c],EBX      ; 0040f70e
    PUSH EDX                            ; 0040f712
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0040f713
    MOV dword ptr [ESP + 0x44],EBX      ; 0040f71a
    PUSH EAX                            ; 0040f71e
    MOV EBX,dword ptr [EAX + 0x14c]     ; 0040f71f
    CALL dword ptr [EBX + 0x100]        ; 0040f725
    ADD ESP,0x8                         ; 0040f72b
    POP ESI                             ; 0040f72e
    POP EDI                             ; 0040f72f
    ADD ESP,0x44                        ; 0040f730
    POP EBX                             ; 0040f733
    RET                                 ; 0040f734

