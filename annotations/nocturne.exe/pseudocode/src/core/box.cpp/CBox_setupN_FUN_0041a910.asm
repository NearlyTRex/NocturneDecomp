; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_CBox_setupN_FUN_0041a910(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_box_cpp_00579655
;   TerminatedCString s_CBox_setupN_Too_many_scr_00579665
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_box.cpp_CBox_updateTransform_FUN_0041aaa0
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a910
        ;   Label: core_box.cpp_CBox_setupN_FUN_0041a910
    PUSH ESI                            ; 0041a911
    PUSH EDI                            ; 0041a912
    PUSH EBP                            ; 0041a913
    SUB ESP,0x24                        ; 0041a914
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041a917
    MOV EBX,dword ptr [ESP + 0x44]      ; 0041a91b
    CMP EBX,0x8                         ; 0041a91f
    JG 0x0041aa70                       ; 0041a922
        ;   XREF to: 0041aa70 (CONDITIONAL_JUMP)  ; LAB_0041aa70
    MOV EDI,0x4479c000                  ; 0041a928
        ;   Label: LAB_0041a928
    MOV EDX,0xc479c000                  ; 0041a92d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0041a932
    MOV dword ptr [ESP + 0x20],EDI      ; 0041a936
    MOV dword ptr [ESP + 0xc],EDX       ; 0041a93a
    MOV ECX,EDX                         ; 0041a93e
    MOV dword ptr [ESP + 0x10],EDX      ; 0041a940
    MOV dword ptr [ESP + 0x14],EDX      ; 0041a944
    MOV dword ptr [ESP + 0x18],EDI      ; 0041a948
    XOR ECX,EDX                         ; 0041a94c
    TEST EBX,EBX                        ; 0041a94e
    JLE 0x0041a9d0                      ; 0041a950
        ;   XREF to: 0041a9d0 (CONDITIONAL_JUMP)  ; LAB_0041a9d0
    MOV EDX,dword ptr [ESP + 0x48]      ; 0041a956
    FLD float ptr [EDX]                 ; 0041a95a
        ;   Label: LAB_0041a95a
    FCOMP float ptr [ESP + 0x18]        ; 0041a95c
    FNSTSW AX                           ; 0041a960
    SAHF                                ; 0041a962
    JNC 0x0041a96b                      ; 0041a963
        ;   XREF to: 0041a96b (CONDITIONAL_JUMP)  ; LAB_0041a96b
    MOV EAX,dword ptr [EDX]             ; 0041a965
    MOV dword ptr [ESP + 0x18],EAX      ; 0041a967
    FLD float ptr [EDX + 0x4]           ; 0041a96b
        ;   Label: LAB_0041a96b
    FCOMP float ptr [ESP + 0x1c]        ; 0041a96e
    FNSTSW AX                           ; 0041a972
    SAHF                                ; 0041a974
    JNC 0x0041a97e                      ; 0041a975
        ;   XREF to: 0041a97e (CONDITIONAL_JUMP)  ; LAB_0041a97e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041a977
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041a97a
    FLD float ptr [EDX + 0x8]           ; 0041a97e
        ;   Label: LAB_0041a97e
    FCOMP float ptr [ESP + 0x20]        ; 0041a981
    FNSTSW AX                           ; 0041a985
    SAHF                                ; 0041a987
    JNC 0x0041a991                      ; 0041a988
        ;   XREF to: 0041a991 (CONDITIONAL_JUMP)  ; LAB_0041a991
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041a98a
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a98d
    FLD float ptr [EDX]                 ; 0041a991
        ;   Label: LAB_0041a991
    FCOMP float ptr [ESP + 0xc]         ; 0041a993
    FNSTSW AX                           ; 0041a997
    SAHF                                ; 0041a999
    JBE 0x0041a9a2                      ; 0041a99a
        ;   XREF to: 0041a9a2 (CONDITIONAL_JUMP)  ; LAB_0041a9a2
    MOV EAX,dword ptr [EDX]             ; 0041a99c
    MOV dword ptr [ESP + 0xc],EAX       ; 0041a99e
    FLD float ptr [EDX + 0x4]           ; 0041a9a2
        ;   Label: LAB_0041a9a2
    FCOMP float ptr [ESP + 0x10]        ; 0041a9a5
    FNSTSW AX                           ; 0041a9a9
    SAHF                                ; 0041a9ab
    JBE 0x0041a9b5                      ; 0041a9ac
        ;   XREF to: 0041a9b5 (CONDITIONAL_JUMP)  ; LAB_0041a9b5
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041a9ae
    MOV dword ptr [ESP + 0x10],EAX      ; 0041a9b1
    FLD float ptr [EDX + 0x8]           ; 0041a9b5
        ;   Label: LAB_0041a9b5
    FCOMP float ptr [ESP + 0x14]        ; 0041a9b8
    FNSTSW AX                           ; 0041a9bc
    SAHF                                ; 0041a9be
    JBE 0x0041a9c8                      ; 0041a9bf
        ;   XREF to: 0041a9c8 (CONDITIONAL_JUMP)  ; LAB_0041a9c8
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041a9c1
    MOV dword ptr [ESP + 0x14],EAX      ; 0041a9c4
    INC ECX                             ; 0041a9c8
        ;   Label: LAB_0041a9c8
    ADD EDX,0xc                         ; 0041a9c9
    CMP ECX,EBX                         ; 0041a9cc
    JL 0x0041a95a                       ; 0041a9ce
        ;   XREF to: 0041a95a (CONDITIONAL_JUMP)  ; LAB_0041a95a
    FLD float ptr [ESP + 0xc]           ; 0041a9d0
        ;   Label: LAB_0041a9d0
    FLD float ptr [ESP + 0x10]          ; 0041a9d4
    FLD float ptr [ESP + 0x14]          ; 0041a9d8
    MOV EAX,ESP                         ; 0041a9dc
    LEA EDX,[ESI + 0xa4]                ; 0041a9de
    FXCH ST2                            ; 0041a9e4
    FSUB float ptr [ESP + 0x18]         ; 0041a9e6
    FXCH                                ; 0041a9ea
    FSUB float ptr [ESP + 0x1c]         ; 0041a9ec
    FXCH ST2                            ; 0041a9f0
    FSUB float ptr [ESP + 0x20]         ; 0041a9f2
    FXCH ST2                            ; 0041a9f6
    FSTP float ptr [ESP + 0x4]          ; 0041a9f8
    FXCH                                ; 0041a9fc
    FSTP float ptr [ESP + 0x8]          ; 0041a9fe
    FSTP float ptr [ESP]                ; 0041aa02
    CMP EDX,EAX                         ; 0041aa05
    JZ 0x0041aa1c                       ; 0041aa07
        ;   XREF to: 0041aa1c (CONDITIONAL_JUMP)  ; LAB_0041aa1c
    MOV EAX,dword ptr [ESP]             ; 0041aa09
    MOV dword ptr [EDX],EAX             ; 0041aa0c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041aa0e
    MOV dword ptr [EDX + 0x4],EAX       ; 0041aa12
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041aa15
    MOV dword ptr [EDX + 0x8],EAX       ; 0041aa19
    XOR ECX,ECX                         ; 0041aa1c
        ;   Label: LAB_0041aa1c
    MOV dword ptr [ESI + 0xb0],EBX      ; 0041aa1e
    TEST EBX,EBX                        ; 0041aa24
    JLE 0x0041aa51                      ; 0041aa26
        ;   XREF to: 0041aa51 (CONDITIONAL_JUMP)  ; LAB_0041aa51
    MOV EAX,dword ptr [ESP + 0x48]      ; 0041aa28
    LEA EDX,[ESI + 0xb4]                ; 0041aa2c
    CMP EDX,EAX                         ; 0041aa32
        ;   Label: LAB_0041aa32
    JZ 0x0041aa46                       ; 0041aa34
        ;   XREF to: 0041aa46 (CONDITIONAL_JUMP)  ; LAB_0041aa46
    MOV EDI,dword ptr [EAX]             ; 0041aa36
    MOV dword ptr [EDX],EDI             ; 0041aa38
    MOV EDI,dword ptr [EAX + 0x4]       ; 0041aa3a
    MOV dword ptr [EDX + 0x4],EDI       ; 0041aa3d
    MOV EDI,dword ptr [EAX + 0x8]       ; 0041aa40
    MOV dword ptr [EDX + 0x8],EDI       ; 0041aa43
    ADD EDX,0x34                        ; 0041aa46
        ;   Label: LAB_0041aa46
    INC ECX                             ; 0041aa49
    ADD EAX,0xc                         ; 0041aa4a
    CMP ECX,EBX                         ; 0041aa4d
    JL 0x0041aa32                       ; 0041aa4f
        ;   XREF to: 0041aa32 (CONDITIONAL_JUMP)  ; LAB_0041aa32
    MOV EBP,dword ptr [ESP + 0x40]      ; 0041aa51
        ;   Label: LAB_0041aa51
    PUSH dword ptr [ESP + 0x4c]         ; 0041aa55
    PUSH EBP                            ; 0041aa59
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041aa5a
    PUSH EAX                            ; 0041aa5e
    PUSH ESI                            ; 0041aa5f
    CALL core_box.cpp_CBox_updateTransform_FUN_0041aaa0 ; 0041aa60
        ;   XREF to: 0041aaa0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_updateTransform_FUN_0041aaa0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041aa65
    ADD ESP,0x24                        ; 0041aa68
    POP EBP                             ; 0041aa6b
    POP EDI                             ; 0041aa6c
    POP ESI                             ; 0041aa6d
    POP EBX                             ; 0041aa6e
    RET                                 ; 0041aa6f
    MOV EDX,0x579655                    ; 0041aa70 | = "..\\core\\box.cpp"
        ;   Label: LAB_0041aa70
    MOV ECX,0x80                        ; 0041aa75
    PUSH 0x579665                       ; 0041aa7a | = "CBox::setupN - Too many scrape points"
    MOV dword ptr [0x01cc4800],EDX      ; 0041aa7f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041aa85 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0041aa8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0041aa90
    JMP 0x0041a928                      ; 0041aa93
        ;   XREF to: 0041a928 (UNCONDITIONAL_JUMP)  ; LAB_0041a928

