; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 004243e7
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a800
        ;   Label: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800
    PUSH ESI                            ; 0042a801
    PUSH EDI                            ; 0042a802
    PUSH EBP                            ; 0042a803
    SUB ESP,0x18                        ; 0042a804
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a807
    CMP byte ptr [EAX + 0x23b0],0x0     ; 0042a80b
    JZ 0x0042a993                       ; 0042a812
        ;   XREF to: 0042a993 (CONDITIONAL_JUMP)  ; LAB_0042a993
    ADD EAX,0x50                        ; 0042a818
    XOR EBX,EBX                         ; 0042a81b
    IMUL EDX,EBX,0x50                   ; 0042a81d
        ;   Label: LAB_0042a81d
    ADD EDX,dword ptr [ESP + 0x2c]      ; 0042a820
    MOV ECX,EAX                         ; 0042a824
    ADD EDX,0x4                         ; 0042a826
        ;   Label: LAB_0042a826
    MOV dword ptr [EDX + 0xb648],0x501502f9 ; 0042a829
    CMP EDX,ECX                         ; 0042a833
    JNZ 0x0042a826                      ; 0042a835
        ;   XREF to: 0042a826 (CONDITIONAL_JUMP)  ; LAB_0042a826
    INC EBX                             ; 0042a837
    ADD EAX,0x50                        ; 0042a838
    CMP EBX,0x14                        ; 0042a83b
    JL 0x0042a81d                       ; 0042a83e
        ;   XREF to: 0042a81d (CONDITIONAL_JUMP)  ; LAB_0042a81d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a840
    ADD EAX,0x150                       ; 0042a844
    PUSH EAX                            ; 0042a849
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0042a84a
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042a84f
    MOV EDI,EAX                         ; 0042a852
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a854
    MOV EBX,dword ptr [EAX + 0x2620]    ; 0042a858
    XOR ESI,ESI                         ; 0042a85e
    TEST EBX,EBX                        ; 0042a860
    JLE 0x0042a8f2                      ; 0042a862
        ;   XREF to: 0042a8f2 (CONDITIONAL_JUMP)  ; LAB_0042a8f2
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042a868
    ADD EAX,0x2624                      ; 0042a86c
    ADD EBP,0x262c                      ; 0042a871
    MOV dword ptr [ESP + 0x4],EAX       ; 0042a877
    IMUL EBX,ESI,0x38                   ; 0042a87b
        ;   Label: LAB_0042a87b
    PUSH 0x1                            ; 0042a87e
    PUSH EBP                            ; 0042a880
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042a881
    PUSH EDI                            ; 0042a885
    ADD EBX,ECX                         ; 0042a886
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0042a888
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0x2c],EAX      ; 0042a88d
    IMUL EAX,EAX,0x54c                  ; 0042a890
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9cc] ; 0042a896
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0042a89d
    MOV dword ptr [EBX + 0x30],EAX      ; 0042a8a0
    IMUL EAX,ECX,0x54c                  ; 0042a8a3
    FILD dword ptr [EBX + 0x30]         ; 0042a8a9
    FDIV float ptr [EDI + EAX*0x1 + 0x988] ; 0042a8ac
    ADD ESP,0xc                         ; 0042a8b3
    MOV EAX,dword ptr [EBX + 0x28]      ; 0042a8b6
    FSTP float ptr [EBX + 0x34]         ; 0042a8b9
    TEST EAX,EAX                        ; 0042a8bc
    JL 0x0042a8d6                       ; 0042a8be
        ;   XREF to: 0042a8d6 (CONDITIONAL_JUMP)  ; LAB_0042a8d6
    IMUL EAX,dword ptr [EBX],0x50       ; 0042a8c0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a8c3
    ADD EDX,EAX                         ; 0042a8c7
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042a8c9
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042a8cc
    MOV dword ptr [EDX + EAX*0x4 + 0xb64c],ECX ; 0042a8cf
    CMP dword ptr [EBX + 0x28],0x0      ; 0042a8d6
        ;   Label: LAB_0042a8d6
    JLE 0x0042a99b                      ; 0042a8da
        ;   XREF to: 0042a99b (CONDITIONAL_JUMP)  ; LAB_0042a99b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a8e0
        ;   Label: LAB_0042a8e0
    INC ESI                             ; 0042a8e4
    MOV EDX,dword ptr [EAX + 0x2620]    ; 0042a8e5
    ADD EBP,0x38                        ; 0042a8eb
    CMP ESI,EDX                         ; 0042a8ee
    JL 0x0042a87b                       ; 0042a8f0
        ;   XREF to: 0042a87b (CONDITIONAL_JUMP)  ; LAB_0042a87b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a8f2
        ;   Label: LAB_0042a8f2
    XOR EAX,EAX                         ; 0042a8f6
    LEA ECX,[EDX + EAX*0x1]             ; 0042a8f8
        ;   Label: LAB_0042a8f8
    ADD EAX,0x4                         ; 0042a8fb
    ADD EDX,0x50                        ; 0042a8fe
    MOV dword ptr [ECX + 0xb64c],0x0    ; 0042a901
    CMP EAX,0x50                        ; 0042a90b
    JNZ 0x0042a8f8                      ; 0042a90e
        ;   XREF to: 0042a8f8 (CONDITIONAL_JUMP)  ; LAB_0042a8f8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a910
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a914
    ADD EAX,0x640                       ; 0042a918
    MOV dword ptr [ESP],EAX             ; 0042a91d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042a920
        ;   Label: LAB_0042a920
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042a924
    XOR EDI,EDI                         ; 0042a928
    MOV dword ptr [ESP + 0xc],EAX       ; 0042a92a
    ADD EBP,0x50                        ; 0042a92e
    MOV dword ptr [ESP + 0x10],EAX      ; 0042a931
    IMUL ECX,EDI,0x50                   ; 0042a935
        ;   Label: LAB_0042a935
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042a938
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042a93c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042a940
    ADD ECX,EBX                         ; 0042a944
    MOV EBX,EBP                         ; 0042a946
    FLD float ptr [ESI + 0xb64c]        ; 0042a948
        ;   Label: LAB_0042a948
    FADD float ptr [ECX + 0xb64c]       ; 0042a94e
    FST float ptr [ESP + 0x14]          ; 0042a954
    FCOMP float ptr [EDX + 0xb64c]      ; 0042a958
    FNSTSW AX                           ; 0042a95e
    SAHF                                ; 0042a960
    JC 0x0042a9b6                       ; 0042a961
        ;   XREF to: 0042a9b6 (CONDITIONAL_JUMP)  ; LAB_0042a9b6
    ADD ECX,0x4                         ; 0042a963
        ;   Label: LAB_0042a963
    ADD EDX,0x4                         ; 0042a966
    CMP ECX,EBX                         ; 0042a969
    JNZ 0x0042a948                      ; 0042a96b
        ;   XREF to: 0042a948 (CONDITIONAL_JUMP)  ; LAB_0042a948
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042a96d
    INC EDI                             ; 0042a971
    ADD ESI,0x4                         ; 0042a972
    ADD EBP,0x50                        ; 0042a975
    MOV dword ptr [ESP + 0x10],ESI      ; 0042a978
    CMP EDI,0x14                        ; 0042a97c
    JL 0x0042a935                       ; 0042a97f
        ;   XREF to: 0042a935 (CONDITIONAL_JUMP)  ; LAB_0042a935
    MOV EDI,dword ptr [ESP + 0x8]       ; 0042a981
    ADD EDI,0x50                        ; 0042a985
    MOV EBP,dword ptr [ESP]             ; 0042a988
    MOV dword ptr [ESP + 0x8],EDI       ; 0042a98b
    CMP EDI,EBP                         ; 0042a98f
    JNZ 0x0042a920                      ; 0042a991
        ;   XREF to: 0042a920 (CONDITIONAL_JUMP)  ; LAB_0042a920
    ADD ESP,0x18                        ; 0042a993
        ;   Label: LAB_0042a993
    POP EBP                             ; 0042a996
    POP EDI                             ; 0042a997
    POP ESI                             ; 0042a998
    POP EBX                             ; 0042a999
    RET                                 ; 0042a99a
    IMUL EAX,dword ptr [EBX + 0x4],0x50 ; 0042a99b
        ;   Label: LAB_0042a99b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a99f
    ADD EDX,EAX                         ; 0042a9a3
    MOV EAX,dword ptr [EBX]             ; 0042a9a5
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042a9a7
    MOV dword ptr [EDX + EAX*0x4 + 0xb64c],ECX ; 0042a9aa
    JMP 0x0042a8e0                      ; 0042a9b1
        ;   XREF to: 0042a8e0 (UNCONDITIONAL_JUMP)  ; LAB_0042a8e0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a9b6
        ;   Label: LAB_0042a9b6
    MOV dword ptr [EDX + 0xb64c],EAX    ; 0042a9ba
    JMP 0x0042a963                      ; 0042a9c0
        ;   XREF to: 0042a963 (UNCONDITIONAL_JUMP)  ; LAB_0042a963

