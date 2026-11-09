; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004a9870(CEventList *param_1,CEventList *param_2,int param_3)
;
;
; XREF[3]:
;   core_event.cpp_FUN_004a1d00 at 004a3ae0
;   core_game.cpp_FUN_004cf5e0 at 004d03ce
;   core_hostage.cpp_FUN_004ed890 at 004ee76f
;
; Referenced Globals:
;   undefined4 DAT_005deab4
;   TerminatedCString s_events_txt_005deab7
;   undefined4 DAT_005deac2
;   TerminatedCString s_core_event_cpp_005deac6
;   TerminatedCString s_Too_many_persistent_even_005dead8
;   TerminatedCString s_core_event_cpp_005deb06
;   TerminatedCString s_Event_name_s_too_long_005deb18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_findPersistentEvent_FUN_004a9eb0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_string.c_memmove_FUN_005c25d0
;   crt_string.c_strupr_FUN_005c2c20
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9870
        ;   Label: core_event.cpp_FUN_004a9870
    PUSH ESI                            ; 004a9871
    PUSH EDI                            ; 004a9872
    PUSH EBP                            ; 004a9873
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a9874
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a9878
    TEST EDX,EDX                        ; 004a987c
    JZ 0x004a9885                       ; 004a987e
        ;   XREF to: 004a9885 (CONDITIONAL_JUMP)  ; LAB_004a9885
    CMP byte ptr [EDX],0x0              ; 004a9880
    JNZ 0x004a988a                      ; 004a9883
        ;   XREF to: 004a988a (CONDITIONAL_JUMP)  ; LAB_004a988a
    POP EBP                             ; 004a9885
        ;   Label: LAB_004a9885
    POP EDI                             ; 004a9886
    POP ESI                             ; 004a9887
    POP EBX                             ; 004a9888
    RET                                 ; 004a9889
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a988a
        ;   Label: LAB_004a988a
    PUSH ECX                            ; 004a988e
    PUSH EBP                            ; 004a988f
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_004a9eb0 ; 004a9890
        ;   XREF to: 004a9eb0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_004a9eb0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a9895
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a9898
    LEA ESI,[EBP + 0x2590]              ; 004a989c
    TEST EBX,EBX                        ; 004a98a2
    JZ 0x004a99c1                       ; 004a98a4
        ;   XREF to: 004a99c1 (CONDITIONAL_JUMP)  ; LAB_004a99c1
    TEST EAX,EAX                        ; 004a98aa
    JGE 0x004a9885                      ; 004a98ac
        ;   XREF to: 004a9885 (CONDITIONAL_JUMP)  ; LAB_004a9885
    CMP dword ptr [EBP + 0x258c],0x64   ; 004a98ae
    JGE 0x004a994a                      ; 004a98b5
        ;   XREF to: 004a994a (CONDITIONAL_JUMP)  ; LAB_004a994a
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a98bb
        ;   Label: LAB_004a98bb
    SUB ECX,ECX                         ; 004a98bf
    DEC ECX                             ; 004a98c1
    XOR EAX,EAX                         ; 004a98c2
    SCASB.REPNE ES:EDI                  ; 004a98c4
    NOT ECX                             ; 004a98c6
    DEC ECX                             ; 004a98c8
    CMP ECX,0x20                        ; 004a98c9
    JC 0x004a98f5                       ; 004a98cc
        ;   XREF to: 004a98f5 (CONDITIONAL_JUMP)  ; LAB_004a98f5
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a98ce
    PUSH EDX                            ; 004a98d2
    MOV EDI,0x5deb06                    ; 004a98d3 | = "..\\core\\event.cpp"
    MOV EAX,0xd3e                       ; 004a98d8
    PUSH 0x5deb18                       ; 004a98dd | = "Event name %s too long!"
    MOV dword ptr [0x01d1d400],EDI      ; 004a98e2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004a98e8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a98ed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004a98f2
    MOV EDI,dword ptr [EBP + 0x258c]    ; 004a98f5
        ;   Label: LAB_004a98f5
    LEA ECX,[EBP + 0x2590]              ; 004a98fb
    SHL EDI,0x5                         ; 004a9901
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a9904
    ADD EDI,ECX                         ; 004a9908
    PUSH EDI                            ; 004a990a
    MOV AL,byte ptr [ESI]               ; 004a990b
        ;   Label: LAB_004a990b
    MOV byte ptr [EDI],AL               ; 004a990d
    CMP AL,0x0                          ; 004a990f
    JZ 0x004a9923                       ; 004a9911
        ;   XREF to: 004a9923 (CONDITIONAL_JUMP)  ; LAB_004a9923
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9913
    ADD ESI,0x2                         ; 004a9916
    MOV byte ptr [EDI + 0x1],AL         ; 004a9919
    ADD EDI,0x2                         ; 004a991c
    CMP AL,0x0                          ; 004a991f
    JNZ 0x004a990b                      ; 004a9921
        ;   XREF to: 004a990b (CONDITIONAL_JUMP)  ; LAB_004a990b
    POP EDI                             ; 004a9923
        ;   Label: LAB_004a9923
    MOV EAX,dword ptr [EBP + 0x258c]    ; 004a9924
    SHL EAX,0x5                         ; 004a992a
    ADD EAX,ECX                         ; 004a992d
    PUSH EAX                            ; 004a992f
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004a9930
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    MOV ECX,dword ptr [EBP + 0x258c]    ; 004a9935
    INC ECX                             ; 004a993b
    ADD ESP,0x4                         ; 004a993c
    MOV dword ptr [EBP + 0x258c],ECX    ; 004a993f
    POP EBP                             ; 004a9945
    POP EDI                             ; 004a9946
    POP ESI                             ; 004a9947
    POP EBX                             ; 004a9948
    RET                                 ; 004a9949
    PUSH 0x5deab4                       ; 004a994a | DAT_005deab4
        ;   Label: LAB_004a994a
    PUSH 0x5deab7                       ; 004a994f | = "events.txt"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004a9954
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 004a9959
    MOV EDI,EAX                         ; 004a995c
    TEST EAX,EAX                        ; 004a995e
    JZ 0x004a9999                       ; 004a9960
        ;   XREF to: 004a9999 (CONDITIONAL_JUMP)  ; LAB_004a9999
    MOV EDX,dword ptr [EBP + 0x258c]    ; 004a9962
    XOR EBX,EBX                         ; 004a9968
    TEST EDX,EDX                        ; 004a996a
    JLE 0x004a9990                      ; 004a996c
        ;   XREF to: 004a9990 (CONDITIONAL_JUMP)  ; LAB_004a9990
    PUSH ESI                            ; 004a996e
        ;   Label: LAB_004a996e
    PUSH 0x5deac2                       ; 004a996f | DAT_005deac2
    PUSH EDI                            ; 004a9974
    INC EBX                             ; 004a9975
    ADD ESI,0x20                        ; 004a9976
    CALL crt_unknown.c_FUN_005c03c0     ; 004a9979
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBP + 0x258c]    ; 004a997e
    ADD ESP,0xc                         ; 004a9984
    CMP EBX,ECX                         ; 004a9987
    JL 0x004a996e                       ; 004a9989
        ;   XREF to: 004a996e (CONDITIONAL_JUMP)  ; LAB_004a996e
    LEA EAX,[EAX]                       ; 004a998b
    MOV ECX,ECX                         ; 004a998e
    PUSH EDI                            ; 004a9990
        ;   Label: LAB_004a9990
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004a9991
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004a9996
    MOV EBX,0x5deac6                    ; 004a9999 | = "..\\core\\event.cpp"
        ;   Label: LAB_004a9999
    MOV ESI,0xd38                       ; 004a999e
    PUSH 0x5dead8                       ; 004a99a3 | = "Too many persistent events - check ev..."
    MOV dword ptr [0x01d1d400],EBX      ; 004a99a8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004a99ae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a99b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004a99b9
    JMP 0x004a98bb                      ; 004a99bc
        ;   XREF to: 004a98bb (UNCONDITIONAL_JUMP)  ; LAB_004a98bb
    TEST EAX,EAX                        ; 004a99c1
        ;   Label: LAB_004a99c1
    JL 0x004a9885                       ; 004a99c3
        ;   XREF to: 004a9885 (CONDITIONAL_JUMP)  ; LAB_004a9885
    MOV EDI,dword ptr [EBP + 0x258c]    ; 004a99c9
    DEC EDI                             ; 004a99cf
    MOV ECX,EDI                         ; 004a99d0
    SUB ECX,EAX                         ; 004a99d2
    SHL ECX,0x5                         ; 004a99d4
    SHL EAX,0x5                         ; 004a99d7
    PUSH ECX                            ; 004a99da
    LEA ECX,[EAX + 0x20]                ; 004a99db
    ADD ECX,ESI                         ; 004a99de
    PUSH ECX                            ; 004a99e0
    ADD EAX,ESI                         ; 004a99e1
    PUSH EAX                            ; 004a99e3
    MOV dword ptr [EBP + 0x258c],EDI    ; 004a99e4
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a99ea
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a99ef
    POP EBP                             ; 004a99f2
    POP EDI                             ; 004a99f3
    POP ESI                             ; 004a99f4
    POP EBX                             ; 004a99f5
    RET                                 ; 004a99f6

