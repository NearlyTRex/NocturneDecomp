; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_drip_cpp_FUN_0048e740(void)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e740
        ;   Label: core_drip.cpp_FUN_0048e740
    PUSH ESI                            ; 0048e741
    PUSH EDI                            ; 0048e742
    PUSH EBP                            ; 0048e743
    SUB ESP,0x20                        ; 0048e744
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048e747
    MOV EBX,dword ptr [ESP + 0x38]      ; 0048e74b
    LEA EDI,[EBX + 0x4]                 ; 0048e74f
    LEA EDX,[EBX + 0x8]                 ; 0048e752
    MOV dword ptr [ESP + 0x18],EDX      ; 0048e755
    LEA EDX,[EBX + 0xc]                 ; 0048e759
    MOV dword ptr [ESP + 0x1c],EDX      ; 0048e75c
    LEA ESI,[EBX + 0x10]                ; 0048e760
    MOV EDX,dword ptr [EAX + 0x2d4]     ; 0048e763
    LEA EBP,[EBX + 0x14]                ; 0048e769
    CMP EDX,0x2                         ; 0048e76c
    JZ 0x0048e7cf                       ; 0048e76f
        ;   XREF to: 0048e7cf (CONDITIONAL_JUMP)  ; LAB_0048e7cf
    MOV ECX,0xbf000000                  ; 0048e771
    XOR EAX,EAX                         ; 0048e776
    MOV dword ptr [ESP + 0x8],ECX       ; 0048e778
    MOV dword ptr [ESP],ECX             ; 0048e77c
    MOV dword ptr [ESP + 0x4],EAX       ; 0048e77f
    MOV ECX,0x3f000000                  ; 0048e783
    MOV EAX,0x3f800000                  ; 0048e788
    MOV dword ptr [ESP + 0xc],ECX       ; 0048e78d
    MOV dword ptr [ESP + 0x10],EAX      ; 0048e791
    MOV dword ptr [ESP + 0x14],EAX      ; 0048e795
    MOV EAX,dword ptr [ESP]             ; 0048e799
    MOV dword ptr [EBX],EAX             ; 0048e79c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048e79e
    MOV dword ptr [EDI],EAX             ; 0048e7a2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048e7a4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e7a8
    MOV dword ptr [EDX],EAX             ; 0048e7ac
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048e7ae
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048e7b2
    MOV dword ptr [EDX],EAX             ; 0048e7b6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048e7b8
    MOV dword ptr [ESI],EAX             ; 0048e7bc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e7be
    MOV dword ptr [EBP],EAX             ; 0048e7c2
    MOV EAX,EBX                         ; 0048e7c5
    ADD ESP,0x20                        ; 0048e7c7
    POP EBP                             ; 0048e7ca
    POP EDI                             ; 0048e7cb
    POP ESI                             ; 0048e7cc
    POP EBX                             ; 0048e7cd
    RET                                 ; 0048e7ce
    ADD EAX,0x158                       ; 0048e7cf
        ;   Label: LAB_0048e7cf
    PUSH EAX                            ; 0048e7d4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0048e7d5
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 0048e7da
    MOV EDX,dword ptr [EAX]             ; 0048e7e0
    MOV dword ptr [EBX],EDX             ; 0048e7e2
    LEA EDX,[EAX + 0x4]                 ; 0048e7e4
    MOV EDX,dword ptr [EDX]             ; 0048e7e7
    ADD ESP,0x4                         ; 0048e7e9
    MOV dword ptr [EDI],EDX             ; 0048e7ec
    LEA EDX,[EAX + 0x8]                 ; 0048e7ee
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048e7f1
    MOV EDX,dword ptr [EDX]             ; 0048e7f5
    MOV dword ptr [EDI],EDX             ; 0048e7f7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048e7f9
    MOV EDX,dword ptr [EAX + 0xc]       ; 0048e7fd
    ADD EAX,0xc                         ; 0048e800
    MOV dword ptr [EDI],EDX             ; 0048e803
    LEA EDI,[EAX + 0x4]                 ; 0048e805
    MOV EDI,dword ptr [EDI]             ; 0048e808
    MOV dword ptr [ESI],EDI             ; 0048e80a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0048e80c
    MOV dword ptr [EBP],EAX             ; 0048e80f
    MOV EAX,EBX                         ; 0048e812
    ADD ESP,0x20                        ; 0048e814
    POP EBP                             ; 0048e817
    POP EDI                             ; 0048e818
    POP ESI                             ; 0048e819
    POP EBX                             ; 0048e81a
    RET                                 ; 0048e81b

