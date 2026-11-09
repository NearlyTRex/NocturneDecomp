; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00570840(CSocket *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int *param_5,undefined4 param_6,code *param_7)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a28c0
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0
;   support_trisock.cpp_FUN_005704a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570840
        ;   Label: support_trisock.cpp_FUN_00570840
    PUSH ESI                            ; 00570841
    PUSH EDI                            ; 00570842
    PUSH EBP                            ; 00570843
    SUB ESP,0x804                       ; 00570844
    MOV EBX,dword ptr [ESP + 0x828]     ; 0057084a
    MOV EBP,dword ptr [ESP + 0x830]     ; 00570851
    TEST EBP,EBP                        ; 00570858
    JNZ 0x00570861                      ; 0057085a
        ;   XREF to: 00570861 (CONDITIONAL_JUMP)  ; LAB_00570861
    MOV EBP,0x56fee0                    ; 0057085c
    MOV ESI,0x5d6adf                    ; 00570861
        ;   Label: LAB_00570861
    MOV EDI,ESP                         ; 00570866
    PUSH EDI                            ; 00570868
    MOV AL,byte ptr [ESI]               ; 00570869
        ;   Label: LAB_00570869
    MOV byte ptr [EDI],AL               ; 0057086b
    CMP AL,0x0                          ; 0057086d
    JZ 0x00570881                       ; 0057086f
        ;   XREF to: 00570881 (CONDITIONAL_JUMP)  ; LAB_00570881
    MOV AL,byte ptr [ESI + 0x1]         ; 00570871
    ADD ESI,0x2                         ; 00570874
    MOV byte ptr [EDI + 0x1],AL         ; 00570877
    ADD EDI,0x2                         ; 0057087a
    CMP AL,0x0                          ; 0057087d
    JNZ 0x00570869                      ; 0057087f
        ;   XREF to: 00570869 (CONDITIONAL_JUMP)  ; LAB_00570869
    POP EDI                             ; 00570881
        ;   Label: LAB_00570881
    MOV EAX,ESP                         ; 00570882
    PUSH EAX                            ; 00570884
    PUSH 0x0                            ; 00570885
    CALL EBP                            ; 00570887
    ADD ESP,0x8                         ; 00570889
    TEST EAX,EAX                        ; 0057088c
    JNZ 0x0057089b                      ; 0057088e
        ;   XREF to: 0057089b (CONDITIONAL_JUMP)  ; LAB_0057089b
    ADD ESP,0x804                       ; 00570890
    POP EBP                             ; 00570896
    POP EDI                             ; 00570897
    POP ESI                             ; 00570898
    POP EBX                             ; 00570899
    RET                                 ; 0057089a
    PUSH EBX                            ; 0057089b
        ;   Label: LAB_0057089b
    MOV EAX,dword ptr [EBX]             ; 0057089c
    XOR ESI,ESI                         ; 0057089e
    CALL dword ptr [EAX + 0x18]         ; 005708a0
    ADD ESP,0x4                         ; 005708a3
    MOV EDI,EAX                         ; 005708a6
    PUSH EBX                            ; 005708a8
        ;   Label: LAB_005708a8
    MOV EAX,dword ptr [EBX]             ; 005708a9
    CALL dword ptr [EAX + 0x4]          ; 005708ab
    ADD ESP,0x4                         ; 005708ae
    TEST EAX,EAX                        ; 005708b1
    JL 0x005708b8                       ; 005708b3
        ;   XREF to: 005708b8 (CONDITIONAL_JUMP)  ; LAB_005708b8
    INC ESI                             ; 005708b5
    JMP 0x005708a8                      ; 005708b6
        ;   XREF to: 005708a8 (UNCONDITIONAL_JUMP)  ; LAB_005708a8
    PUSH 0x0                            ; 005708b8
        ;   Label: LAB_005708b8
    PUSH EDI                            ; 005708ba
    MOV EAX,dword ptr [EBX]             ; 005708bb
    PUSH EBX                            ; 005708bd
    CALL dword ptr [EAX + 0x14]         ; 005708be
    ADD ESP,0xc                         ; 005708c1
    XOR EAX,EAX                         ; 005708c4
    PUSH ESI                            ; 005708c6
    MOV AX,word ptr [ESP + 0x824]       ; 005708c7
    PUSH EAX                            ; 005708cf
    MOV EDX,dword ptr [ESP + 0x824]     ; 005708d0
    PUSH EDX                            ; 005708d7
    MOV ECX,dword ptr [ESP + 0x830]     ; 005708d8
    PUSH ECX                            ; 005708df
    PUSH 0x5d6af3                       ; 005708e0
    LEA EAX,[ESP + 0x14]                ; 005708e5
    PUSH EAX                            ; 005708e9
    CALL crt_unknown.c_FUN_005a28c0     ; 005708ea
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x18                        ; 005708ef
    PUSH 0x0                            ; 005708f2
    LEA EDI,[ESP + 0x4]                 ; 005708f4
    SUB ECX,ECX                         ; 005708f8
    DEC ECX                             ; 005708fa
    XOR EAX,EAX                         ; 005708fb
    SCASB.REPNE ES:EDI                  ; 005708fd
    NOT ECX                             ; 005708ff
    DEC ECX                             ; 00570901
    PUSH ECX                            ; 00570902
    LEA EAX,[ESP + 0x8]                 ; 00570903
    PUSH EAX                            ; 00570907
    MOV EDI,dword ptr [ESP + 0x824]     ; 00570908
    PUSH EDI                            ; 0057090f
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 00570910
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 00570915
    TEST EAX,EAX                        ; 00570918
    JZ 0x00570959                       ; 0057091a
        ;   XREF to: 00570959 (CONDITIONAL_JUMP)  ; LAB_00570959
    TEST ESI,ESI                        ; 0057091c
        ;   Label: LAB_0057091c
    JLE 0x0057098d                      ; 0057091e
        ;   XREF to: 0057098d (CONDITIONAL_JUMP)  ; LAB_0057098d
    PUSH EBX                            ; 00570920
    MOV EAX,dword ptr [EBX]             ; 00570921
    CALL dword ptr [EAX + 0x4]          ; 00570923
    ADD ESP,0x4                         ; 00570926
    MOV ECX,EAX                         ; 00570929
    TEST EAX,EAX                        ; 0057092b
    JL 0x00570974                       ; 0057092d
        ;   XREF to: 00570974 (CONDITIONAL_JUMP)  ; LAB_00570974
    PUSH 0x0                            ; 0057092f
    PUSH 0x1                            ; 00570931
    MOV byte ptr [ESP + 0x808],AL       ; 00570933
    LEA EAX,[ESP + 0x808]               ; 0057093a
    PUSH EAX                            ; 00570941
    MOV EDX,dword ptr [ESP + 0x824]     ; 00570942
    PUSH EDX                            ; 00570949
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 0057094a
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057094f
    TEST EAX,EAX                        ; 00570952
    JZ 0x00570959                       ; 00570954
        ;   XREF to: 00570959 (CONDITIONAL_JUMP)  ; LAB_00570959
    DEC ESI                             ; 00570956
    JMP 0x0057091c                      ; 00570957
        ;   XREF to: 0057091c (UNCONDITIONAL_JUMP)  ; LAB_0057091c
    PUSH 0x5d6b29                       ; 00570959
        ;   Label: LAB_00570959
    PUSH 0x0                            ; 0057095e
    CALL EBP                            ; 00570960
    ADD ESP,0x8                         ; 00570962
    TEST EAX,EAX                        ; 00570965
    JNZ 0x0057091c                      ; 00570967
        ;   XREF to: 0057091c (CONDITIONAL_JUMP)  ; LAB_0057091c
    ADD ESP,0x804                       ; 00570969
    POP EBP                             ; 0057096f
    POP EDI                             ; 00570970
    POP ESI                             ; 00570971
    POP EBX                             ; 00570972
    RET                                 ; 00570973
    PUSH 0x5d6b49                       ; 00570974
        ;   Label: LAB_00570974
    PUSH 0x1                            ; 00570979
    CALL EBP                            ; 0057097b
    ADD ESP,0x8                         ; 0057097d
    XOR EAX,EAX                         ; 00570980
    ADD ESP,0x804                       ; 00570982
    POP EBP                             ; 00570988
    POP EDI                             ; 00570989
    POP ESI                             ; 0057098a
    POP EBX                             ; 0057098b
    RET                                 ; 0057098c
    PUSH EBP                            ; 0057098d
        ;   Label: LAB_0057098d
    PUSH 0x5d6b5c                       ; 0057098e
    MOV EBP,dword ptr [ESP + 0x834]     ; 00570993
    PUSH EBP                            ; 0057099a
    MOV EAX,dword ptr [ESP + 0x824]     ; 0057099b
    PUSH EAX                            ; 005709a2
    CALL support_trisock.cpp_FUN_005704a0 ; 005709a3
        ;   XREF to: 005704a0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005704a0()
    ADD ESP,0x10                        ; 005709a8
    ADD ESP,0x804                       ; 005709ab
    POP EBP                             ; 005709b1
    POP EDI                             ; 005709b2
    POP ESI                             ; 005709b3
    POP EBX                             ; 005709b4
    RET                                 ; 005709b5

