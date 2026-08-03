; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(int param_1,float *param_2)
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
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004627a0
        ;   Label: core_drip.cpp_CDrip_getBoundingBox_FUN_004627a0
    PUSH ESI                            ; 004627a1
    PUSH EDI                            ; 004627a2
    PUSH EBP                            ; 004627a3
    SUB ESP,0x20                        ; 004627a4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004627a7
    MOV EBX,dword ptr [ESP + 0x38]      ; 004627ab
    LEA EDI,[EBX + 0x4]                 ; 004627af
    LEA EDX,[EBX + 0x8]                 ; 004627b2
    MOV dword ptr [ESP + 0x18],EDX      ; 004627b5
    LEA EDX,[EBX + 0xc]                 ; 004627b9
    MOV dword ptr [ESP + 0x1c],EDX      ; 004627bc
    LEA ESI,[EBX + 0x10]                ; 004627c0
    MOV EDX,dword ptr [EAX + 0x2cc]     ; 004627c3
    LEA EBP,[EBX + 0x14]                ; 004627c9
    CMP EDX,0x2                         ; 004627cc
    JZ 0x0046282f                       ; 004627cf
        ;   XREF to: 0046282f (CONDITIONAL_JUMP)  ; LAB_0046282f
    MOV ECX,0xbf000000                  ; 004627d1
    XOR EAX,EAX                         ; 004627d6
    MOV dword ptr [ESP + 0x8],ECX       ; 004627d8
    MOV dword ptr [ESP],ECX             ; 004627dc
    MOV dword ptr [ESP + 0x4],EAX       ; 004627df
    MOV ECX,0x3f000000                  ; 004627e3
    MOV EAX,0x3f800000                  ; 004627e8
    MOV dword ptr [ESP + 0xc],ECX       ; 004627ed
    MOV dword ptr [ESP + 0x10],EAX      ; 004627f1
    MOV dword ptr [ESP + 0x14],EAX      ; 004627f5
    MOV EAX,dword ptr [ESP]             ; 004627f9
    MOV dword ptr [EBX],EAX             ; 004627fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004627fe
    MOV dword ptr [EDI],EAX             ; 00462802
    MOV EDX,dword ptr [ESP + 0x18]      ; 00462804
    MOV EAX,dword ptr [ESP + 0x8]       ; 00462808
    MOV dword ptr [EDX],EAX             ; 0046280c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046280e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00462812
    MOV dword ptr [EDX],EAX             ; 00462816
    MOV EAX,dword ptr [ESP + 0x10]      ; 00462818
    MOV dword ptr [ESI],EAX             ; 0046281c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046281e
    MOV dword ptr [EBP],EAX             ; 00462822
    MOV EAX,EBX                         ; 00462825
    ADD ESP,0x20                        ; 00462827
    POP EBP                             ; 0046282a
    POP EDI                             ; 0046282b
    POP ESI                             ; 0046282c
    POP EBX                             ; 0046282d
    RET                                 ; 0046282e
    ADD EAX,0x150                       ; 0046282f
        ;   Label: LAB_0046282f
    PUSH EAX                            ; 00462834
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00462835
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0046283a
    MOV EDX,dword ptr [EAX]             ; 00462840
    MOV dword ptr [EBX],EDX             ; 00462842
    LEA EDX,[EAX + 0x4]                 ; 00462844
    MOV EDX,dword ptr [EDX]             ; 00462847
    ADD ESP,0x4                         ; 00462849
    MOV dword ptr [EDI],EDX             ; 0046284c
    LEA EDX,[EAX + 0x8]                 ; 0046284e
    MOV EDI,dword ptr [ESP + 0x18]      ; 00462851
    MOV EDX,dword ptr [EDX]             ; 00462855
    MOV dword ptr [EDI],EDX             ; 00462857
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00462859
    MOV EDX,dword ptr [EAX + 0xc]       ; 0046285d
    ADD EAX,0xc                         ; 00462860
    MOV dword ptr [EDI],EDX             ; 00462863
    LEA EDI,[EAX + 0x4]                 ; 00462865
    MOV EDI,dword ptr [EDI]             ; 00462868
    MOV dword ptr [ESI],EDI             ; 0046286a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0046286c
    MOV dword ptr [EBP],EAX             ; 0046286f
    MOV EAX,EBX                         ; 00462872
    ADD ESP,0x20                        ; 00462874
    POP EBP                             ; 00462877
    POP EDI                             ; 00462878
    POP ESI                             ; 00462879
    POP EBX                             ; 0046287a
    RET                                 ; 0046287b

