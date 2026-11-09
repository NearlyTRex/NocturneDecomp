; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_0056f890(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5)
;
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
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
; XREF[1]:
;   sound_sndmain.cpp_FUN_00576c20 at 00576e91
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f31ff
;   TerminatedCString s_convertMixBufToOutput_in_005f3214
;   undefined4 DAT_005f3240
;   undefined4 DAT_005f3244
;   undefined4 DAT_005f3248
;   undefined4 DAT_005f3250
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f890
        ;   Label: sound_sndmain.cpp_convertMixBufToOutput_FUN_0056f890
    PUSH ESI                            ; 0056f891
    PUSH EDI                            ; 0056f892
    PUSH EBP                            ; 0056f893
    MOV EBP,ESP                         ; 0056f894
    SUB ESP,0x34                        ; 0056f896
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056f899
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f89c
    MOV dword ptr [EBP + -0x20],EDX     ; 0056f89f
    CMP EAX,0x8                         ; 0056f8a2
    JC 0x0056f9dd                       ; 0056f8a5
        ;   XREF to: 0056f9dd (CONDITIONAL_JUMP)  ; LAB_0056f9dd
    JBE 0x0056f919                      ; 0056f8ab
        ;   XREF to: 0056f919 (CONDITIONAL_JUMP)  ; LAB_0056f919
    CMP EAX,0x10                        ; 0056f8ad
    JNZ 0x0056f9dd                      ; 0056f8b0
        ;   XREF to: 0056f9dd (CONDITIONAL_JUMP)  ; LAB_0056f9dd
    XOR EDX,EDX                         ; 0056f8b6
    MOV ECX,dword ptr [EBP + 0x20]      ; 0056f8b8
    MOV dword ptr [EBP + -0x4],EDX      ; 0056f8bb
    TEST ECX,ECX                        ; 0056f8be
    JLE 0x0056f912                      ; 0056f8c0
        ;   XREF to: 0056f912 (CONDITIONAL_JUMP)  ; LAB_0056f912
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056f8c2
        ;   Label: LAB_0056f8c2
    MOV EAX,dword ptr [EAX]             ; 0056f8c5
    MOV dword ptr [EBP + -0xc],EAX      ; 0056f8c7
    FLD float ptr [EBP + -0xc]          ; 0056f8ca
    FST double ptr [EBP + -0x34]        ; 0056f8cd
    FCOMP double ptr [0x005f3248]       ; 0056f8d0 | DAT_005f3248
    FNSTSW AX                           ; 0056f8d6
    SAHF                                ; 0056f8d8
    JBE 0x0056f9a3                      ; 0056f8d9
        ;   XREF to: 0056f9a3 (CONDITIONAL_JUMP)  ; LAB_0056f9a3
    FLD1                                ; 0056f8df
    FCOMP double ptr [EBP + -0x34]      ; 0056f8e1
    FNSTSW AX                           ; 0056f8e4
    SAHF                                ; 0056f8e6
    JA 0x0056f9b0                       ; 0056f8e7
        ;   XREF to: 0056f9b0 (CONDITIONAL_JUMP)  ; LAB_0056f9b0
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f8ed
    MOV word ptr [EAX],0x7fff           ; 0056f8f0
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056f8f5
        ;   Label: LAB_0056f8f5
    ADD dword ptr [EBP + -0x20],EAX     ; 0056f8f8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056f8fb
    MOV ESI,dword ptr [EBP + -0x4]      ; 0056f8fe
    MOV EDI,dword ptr [EBP + 0x20]      ; 0056f901
    ADD EBX,0x4                         ; 0056f904
    INC ESI                             ; 0056f907
    MOV dword ptr [EBP + 0x14],EBX      ; 0056f908
    MOV dword ptr [EBP + -0x4],ESI      ; 0056f90b
    CMP ESI,EDI                         ; 0056f90e
    JL 0x0056f8c2                       ; 0056f910
        ;   XREF to: 0056f8c2 (CONDITIONAL_JUMP)  ; LAB_0056f8c2
    MOV ESP,EBP                         ; 0056f912
        ;   Label: LAB_0056f912
    POP EBP                             ; 0056f914
    POP EDI                             ; 0056f915
    POP ESI                             ; 0056f916
    POP EBX                             ; 0056f917
    RET                                 ; 0056f918
    XOR EBX,EBX                         ; 0056f919
        ;   Label: LAB_0056f919
    MOV ESI,dword ptr [EBP + 0x20]      ; 0056f91b
    MOV dword ptr [EBP + -0x8],EBX      ; 0056f91e
    TEST ESI,ESI                        ; 0056f921
    JLE 0x0056f912                      ; 0056f923
        ;   XREF to: 0056f912 (CONDITIONAL_JUMP)  ; LAB_0056f912
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056f925
        ;   Label: LAB_0056f925
    MOV EAX,dword ptr [EAX]             ; 0056f928
    MOV dword ptr [EBP + -0x24],EAX     ; 0056f92a
    FLD float ptr [EBP + -0x24]         ; 0056f92d
    FST double ptr [EBP + -0x2c]        ; 0056f930
    FCOMP double ptr [0x005f3248]       ; 0056f933 | DAT_005f3248
    FNSTSW AX                           ; 0056f939
    SAHF                                ; 0056f93b
    JBE 0x0056f96d                      ; 0056f93c
        ;   XREF to: 0056f96d (CONDITIONAL_JUMP)  ; LAB_0056f96d
    FLD1                                ; 0056f93e
    FCOMP double ptr [EBP + -0x2c]      ; 0056f940
    FNSTSW AX                           ; 0056f943
    SAHF                                ; 0056f945
    JA 0x0056f975                       ; 0056f946
        ;   XREF to: 0056f975 (CONDITIONAL_JUMP)  ; LAB_0056f975
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f948
    MOV byte ptr [EAX],0xff             ; 0056f94b
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056f94e
        ;   Label: LAB_0056f94e
    ADD dword ptr [EBP + -0x20],EAX     ; 0056f951
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056f954
    MOV EBX,dword ptr [EBP + -0x8]      ; 0056f957
    MOV ESI,dword ptr [EBP + 0x20]      ; 0056f95a
    ADD ECX,0x4                         ; 0056f95d
    INC EBX                             ; 0056f960
    MOV dword ptr [EBP + 0x14],ECX      ; 0056f961
    MOV dword ptr [EBP + -0x8],EBX      ; 0056f964
    CMP EBX,ESI                         ; 0056f967
    JGE 0x0056f912                      ; 0056f969
        ;   XREF to: 0056f912 (CONDITIONAL_JUMP)  ; LAB_0056f912
    JMP 0x0056f925                      ; 0056f96b
        ;   XREF to: 0056f925 (UNCONDITIONAL_JUMP)  ; LAB_0056f925
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f96d
        ;   Label: LAB_0056f96d
    MOV byte ptr [EAX],0x0              ; 0056f970
    JMP 0x0056f94e                      ; 0056f973
        ;   XREF to: 0056f94e (UNCONDITIONAL_JUMP)  ; LAB_0056f94e
    FLD float ptr [EBP + -0x24]         ; 0056f975
        ;   Label: LAB_0056f975
    FMUL float ptr [0x005f3244]         ; 0056f978 | DAT_005f3244
    FADD float ptr [0x005f3250]         ; 0056f97e | DAT_005f3250
    FSTP float ptr [EBP + -0x1c]        ; 0056f984
    FLD float ptr [EBP + 0xffffffe4]    ; 0056f987
    FISTP dword ptr [EBP + 0xffffffe8]  ; 0056f98d
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 0056f993
    MOV AL,byte ptr [EBP + 0xffffffe8]  ; 0056f999
    MOV byte ptr [ECX],AL               ; 0056f99f
    JMP 0x0056f94e                      ; 0056f9a1
        ;   XREF to: 0056f94e (UNCONDITIONAL_JUMP)  ; LAB_0056f94e
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f9a3
        ;   Label: LAB_0056f9a3
    MOV word ptr [EAX],0x8001           ; 0056f9a6
    JMP 0x0056f8f5                      ; 0056f9ab
        ;   XREF to: 0056f8f5 (UNCONDITIONAL_JUMP)  ; LAB_0056f8f5
    FLD float ptr [EBP + -0xc]          ; 0056f9b0
        ;   Label: LAB_0056f9b0
    FMUL float ptr [0x005f3240]         ; 0056f9b3 | DAT_005f3240
    FSTP float ptr [EBP + -0x14]        ; 0056f9b9
    FLD float ptr [EBP + 0xffffffec]    ; 0056f9bc
    FISTP dword ptr [EBP + 0xfffffff0]  ; 0056f9c2
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 0056f9c8
    MOV AX,word ptr [EBP + 0xfffffff0]  ; 0056f9ce
    MOV word ptr [ECX],AX               ; 0056f9d5
    JMP 0x0056f8f5                      ; 0056f9d8
        ;   XREF to: 0056f8f5 (UNCONDITIONAL_JUMP)  ; LAB_0056f8f5
    PUSH EAX                            ; 0056f9dd
        ;   Label: LAB_0056f9dd
    MOV EDI,0x5f31ff                    ; 0056f9de | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x617                       ; 0056f9e3
    PUSH 0x5f3214                       ; 0056f9e8 | = "convertMixBufToOutput - invalid bits: %d"
    MOV dword ptr [0x01d1d400],EDI      ; 0056f9ed | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0056f9f3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056f9f9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0056f9fe
    MOV ESP,EBP                         ; 0056fa01
    POP EBP                             ; 0056fa03
    POP EDI                             ; 0056fa04
    POP ESI                             ; 0056fa05
    POP EBX                             ; 0056fa06
    RET                                 ; 0056fa07

