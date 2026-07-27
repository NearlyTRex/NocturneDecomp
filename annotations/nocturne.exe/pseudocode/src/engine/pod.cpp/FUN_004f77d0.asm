; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_004f77d0(uint param_1,byte param_2)
;
;
; XREF[6]:
;   engine_pod.cpp_FUN_004f7890 at 004f78ad
;   engine_pod.cpp_FUN_004f78d0 at 004f7912
;   engine_pod.cpp_FUN_004f7980 at 004f79f6
;   engine_pod.cpp_FUN_004f8240 at 004f8363
;   engine_pod.cpp_FUN_004f86a0 at 004f8788
;   engine_pod.cpp_FUN_004f8eb0 at 004f8fc7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f77d0
        ;   Label: engine_pod.cpp_FUN_004f77d0
    XOR EAX,EAX                         ; 004f77d4
    MOV AL,byte ptr [ESP + 0x8]         ; 004f77d6
    SHL EAX,0x18                        ; 004f77da
    XOR EDX,EAX                         ; 004f77dd
    LEA EAX,[EDX + EDX*0x1]             ; 004f77df
    TEST EDX,0x80000000                 ; 004f77e2
    JZ 0x004f77ef                       ; 004f77e8
        ;   XREF to: 004f77ef (CONDITIONAL_JUMP)  ; LAB_004f77ef
    XOR EAX,0x4c11db7                   ; 004f77ea
    LEA EDX,[EAX + EAX*0x1]             ; 004f77ef
        ;   Label: LAB_004f77ef
    TEST EAX,0x80000000                 ; 004f77f2
    JZ 0x004f786b                       ; 004f77f7
        ;   XREF to: 004f786b (CONDITIONAL_JUMP)  ; LAB_004f786b
    MOV EAX,EDX                         ; 004f77fd
    XOR EAX,0x4c11db7                   ; 004f77ff
    LEA EDX,[EAX + EAX*0x1]             ; 004f7804
        ;   Label: LAB_004f7804
    TEST EAX,0x80000000                 ; 004f7807
    JZ 0x004f786f                       ; 004f780c
        ;   XREF to: 004f786f (CONDITIONAL_JUMP)  ; LAB_004f786f
    MOV EAX,EDX                         ; 004f780e
    XOR EAX,0x4c11db7                   ; 004f7810
    LEA EDX,[EAX + EAX*0x1]             ; 004f7815
        ;   Label: LAB_004f7815
    TEST EAX,0x80000000                 ; 004f7818
    JZ 0x004f7873                       ; 004f781d
        ;   XREF to: 004f7873 (CONDITIONAL_JUMP)  ; LAB_004f7873
    MOV EAX,EDX                         ; 004f781f
    XOR EAX,0x4c11db7                   ; 004f7821
    LEA EDX,[EAX + EAX*0x1]             ; 004f7826
        ;   Label: LAB_004f7826
    TEST EAX,0x80000000                 ; 004f7829
    JZ 0x004f7877                       ; 004f782e
        ;   XREF to: 004f7877 (CONDITIONAL_JUMP)  ; LAB_004f7877
    MOV EAX,EDX                         ; 004f7830
    XOR EAX,0x4c11db7                   ; 004f7832
    LEA EDX,[EAX + EAX*0x1]             ; 004f7837
        ;   Label: LAB_004f7837
    TEST EAX,0x80000000                 ; 004f783a
    JZ 0x004f787b                       ; 004f783f
        ;   XREF to: 004f787b (CONDITIONAL_JUMP)  ; LAB_004f787b
    MOV EAX,EDX                         ; 004f7841
    XOR EAX,0x4c11db7                   ; 004f7843
    LEA EDX,[EAX + EAX*0x1]             ; 004f7848
        ;   Label: LAB_004f7848
    TEST EAX,0x80000000                 ; 004f784b
    JZ 0x004f787f                       ; 004f7850
        ;   XREF to: 004f787f (CONDITIONAL_JUMP)  ; LAB_004f787f
    MOV EAX,EDX                         ; 004f7852
    XOR EAX,0x4c11db7                   ; 004f7854
    LEA EDX,[EAX + EAX*0x1]             ; 004f7859
        ;   Label: LAB_004f7859
    TEST EAX,0x80000000                 ; 004f785c
    JZ 0x004f7883                       ; 004f7861
        ;   XREF to: 004f7883 (CONDITIONAL_JUMP)  ; LAB_004f7883
    MOV EAX,EDX                         ; 004f7863
    XOR EAX,0x4c11db7                   ; 004f7865
    RET                                 ; 004f786a
    MOV EAX,EDX                         ; 004f786b
        ;   Label: LAB_004f786b
    JMP 0x004f7804                      ; 004f786d
        ;   XREF to: 004f7804 (UNCONDITIONAL_JUMP)  ; LAB_004f7804
    MOV EAX,EDX                         ; 004f786f
        ;   Label: LAB_004f786f
    JMP 0x004f7815                      ; 004f7871
        ;   XREF to: 004f7815 (UNCONDITIONAL_JUMP)  ; LAB_004f7815
    MOV EAX,EDX                         ; 004f7873
        ;   Label: LAB_004f7873
    JMP 0x004f7826                      ; 004f7875
        ;   XREF to: 004f7826 (UNCONDITIONAL_JUMP)  ; LAB_004f7826
    MOV EAX,EDX                         ; 004f7877
        ;   Label: LAB_004f7877
    JMP 0x004f7837                      ; 004f7879
        ;   XREF to: 004f7837 (UNCONDITIONAL_JUMP)  ; LAB_004f7837
    MOV EAX,EDX                         ; 004f787b
        ;   Label: LAB_004f787b
    JMP 0x004f7848                      ; 004f787d
        ;   XREF to: 004f7848 (UNCONDITIONAL_JUMP)  ; LAB_004f7848
    MOV EAX,EDX                         ; 004f787f
        ;   Label: LAB_004f787f
    JMP 0x004f7859                      ; 004f7881
        ;   XREF to: 004f7859 (UNCONDITIONAL_JUMP)  ; LAB_004f7859
    MOV EAX,EDX                         ; 004f7883
        ;   Label: LAB_004f7883
    RET                                 ; 004f7885

