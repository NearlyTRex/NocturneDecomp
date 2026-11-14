; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_fstream_cpp_FUN_00572809(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00570630 at 00570677
;
; Referenced Globals:
;   undefined4 DAT_005c1795
;
; Called Functions:
;   crt_math.c_set_range_error_errno_FUN_00568e9c
;   crt_unknown.c_FUN_00573ff0
;
; *****************************************************************************

section .text

    OR EAX,EAX                          ; 00572809
        ;   Label: crt_fstream.cpp_FUN_00572809
    JNZ 0x00572814                      ; 0057280b
        ;   XREF to: 00572814 (CONDITIONAL_JUMP)  ; LAB_00572814
    ADD EDX,EDX                         ; 0057280d
    JNZ 0x00572812                      ; 0057280f
        ;   XREF to: 00572812 (CONDITIONAL_JUMP)  ; LAB_00572812
    RET                                 ; 00572811
    RCR EDX,0x1                         ; 00572812
        ;   Label: LAB_00572812
    OR EBX,EBX                          ; 00572814
        ;   Label: LAB_00572814
    JNZ 0x00572823                      ; 00572816
        ;   XREF to: 00572823 (CONDITIONAL_JUMP)  ; LAB_00572823
    ADD ECX,ECX                         ; 00572818
    JNZ 0x00572821                      ; 0057281a
        ;   XREF to: 00572821 (CONDITIONAL_JUMP)  ; LAB_00572821
    SUB EAX,EAX                         ; 0057281c
    SUB EDX,EDX                         ; 0057281e
    RET                                 ; 00572820
    RCR ECX,0x1                         ; 00572821
        ;   Label: LAB_00572821
    CMP byte ptr [0x005c1795],0x0       ; 00572823 | DAT_005c1795
        ;   Label: LAB_00572823
    JZ 0x0057283b                       ; 0057282a
        ;   XREF to: 0057283b (CONDITIONAL_JUMP)  ; LAB_0057283b
    PUSH EDX                            ; 0057282c
    PUSH EAX                            ; 0057282d
    FLD double ptr [ESP]                ; 0057282e
    PUSH ECX                            ; 00572831
    PUSH EBX                            ; 00572832
    FMUL double ptr [ESP]               ; 00572833
    JMP 0x0057267e                      ; 00572836
        ;   XREF to: 0057267e (UNCONDITIONAL_JUMP)  ; LAB_0057267e
    PUSH EBP                            ; 0057283b
        ;   Label: LAB_0057283b
    PUSH EDI                            ; 0057283c
    PUSH ESI                            ; 0057283d
    MOV EDI,EDX                         ; 0057283e
    MOV ESI,ECX                         ; 00572840
    SAR EDI,0x14                        ; 00572842
    SAR ECX,0x14                        ; 00572845
    AND EDI,0x800007ff                  ; 00572848
    AND ECX,0x800007ff                  ; 0057284e
    ROL EDI,0x10                        ; 00572854
    ROL ECX,0x10                        ; 00572857
    ADD CX,DI                           ; 0057285a
    ROL EDI,0x10                        ; 0057285d
    ROL ECX,0x10                        ; 00572860
    AND EDX,0xfffff                     ; 00572863
    AND ESI,0xfffff                     ; 00572869
    OR DI,DI                            ; 0057286f
    JNZ 0x00572884                      ; 00572872
        ;   XREF to: 00572884 (CONDITIONAL_JUMP)  ; LAB_00572884
    INC DI                              ; 00572874
    DEC DI                              ; 00572876
        ;   Label: LAB_00572876
    ADD EAX,EAX                         ; 00572878
    ADC EDX,EDX                         ; 0057287a
    TEST EDX,0x100000                   ; 0057287c
    JZ 0x00572876                       ; 00572882
        ;   XREF to: 00572876 (CONDITIONAL_JUMP)  ; LAB_00572876
    OR EDX,0x100000                     ; 00572884
        ;   Label: LAB_00572884
    OR CX,CX                            ; 0057288a
    JNZ 0x0057289f                      ; 0057288d
        ;   XREF to: 0057289f (CONDITIONAL_JUMP)  ; LAB_0057289f
    INC CX                              ; 0057288f
    DEC CX                              ; 00572891
        ;   Label: LAB_00572891
    ADD EBX,EBX                         ; 00572893
    ADC ESI,ESI                         ; 00572895
    TEST ESI,0x100000                   ; 00572897
    JZ 0x00572891                       ; 0057289d
        ;   XREF to: 00572891 (CONDITIONAL_JUMP)  ; LAB_00572891
    OR ESI,0x100000                     ; 0057289f
        ;   Label: LAB_0057289f
    ADD CX,DI                           ; 005728a5
    SUB CX,0x3ff                        ; 005728a8
    JS 0x005728c0                       ; 005728ad
        ;   XREF to: 005728c0 (CONDITIONAL_JUMP)  ; LAB_005728c0
    CMP CX,0x7ff                        ; 005728af
    JC 0x005728c0                       ; 005728b4
        ;   XREF to: 005728c0 (CONDITIONAL_JUMP)  ; LAB_005728c0
    MOV EAX,ECX                         ; 005728b6
    POP ESI                             ; 005728b8
    POP EDI                             ; 005728b9
    POP EBP                             ; 005728ba
    JMP 0x00573607                      ; 005728bb
        ;   XREF to: 00573607 (UNCONDITIONAL_JUMP)  ; LAB_00573607
    CMP CX,-0x35                        ; 005728c0
        ;   Label: LAB_005728c0
    JGE 0x005728ce                      ; 005728c4
        ;   XREF to: 005728ce (CONDITIONAL_JUMP)  ; LAB_005728ce
    POP ESI                             ; 005728c6
    POP EDI                             ; 005728c7
    POP EBP                             ; 005728c8
    JMP 0x005735ea                      ; 005728c9
        ;   XREF to: 005735ea (UNCONDITIONAL_JUMP)  ; LAB_005735ea
    PUSH ECX                            ; 005728ce
        ;   Label: LAB_005728ce
    MOV CL,0xb                          ; 005728cf
    SHLD EDX,EAX,CL                     ; 005728d1
    SHLD EAX,EBP,CL                     ; 005728d4
    AND EAX,0xfffff800                  ; 005728d7
    SHLD ESI,EBX,CL                     ; 005728dc
    SHLD EBX,EBP,CL                     ; 005728df
    AND EBX,0xfffff800                  ; 005728e2
    SUB EBP,EBP                         ; 005728e8
    PUSH ESI                            ; 005728ea
    PUSH EDX                            ; 005728eb
    PUSH EAX                            ; 005728ec
    MUL EBX                             ; 005728ed
    XCHG EAX,ESI                        ; 005728ef
    MOV ECX,EDX                         ; 005728f0
    POP EDX                             ; 005728f2
    MUL EDX                             ; 005728f3
    MOV EDI,EDX                         ; 005728f5
    ADD ECX,EAX                         ; 005728f7
    ADC EDI,EBP                         ; 005728f9
    ADC EBP,EBP                         ; 005728fb
    POP EAX                             ; 005728fd
    XCHG EAX,EBX                        ; 005728fe
    MUL EBX                             ; 005728ff
    ADD ECX,EAX                         ; 00572901
    ADC EDI,EDX                         ; 00572903
    ADC EBP,0x0                         ; 00572905
    MOV EAX,EBX                         ; 00572908
    POP EDX                             ; 0057290a
    MUL EDX                             ; 0057290b
    ADD EAX,EDI                         ; 0057290d
    ADC EDX,EBP                         ; 0057290f
    SUB EBX,EBX                         ; 00572911
    MOV CL,0xa                          ; 00572913
    SHRD EBX,EAX,CL                     ; 00572915
    SHRD EAX,EDX,CL                     ; 00572918
    SHRD EDX,EBX,CL                     ; 0057291b
    POP ECX                             ; 0057291e
    TEST EDX,0x200000                   ; 0057291f
        ;   Label: LAB_0057291f
    JZ 0x00572938                       ; 00572925
        ;   XREF to: 00572938 (CONDITIONAL_JUMP)  ; LAB_00572938
    SHR EDX,0x1                         ; 00572927
    RCR EAX,0x1                         ; 00572929
    RCR EBX,0x1                         ; 0057292b
    INC CX                              ; 0057292d
    CMP CX,0x7ff                        ; 0057292f
    JZ 0x0057299c                       ; 00572934
        ;   XREF to: 0057299c (CONDITIONAL_JUMP)  ; LAB_0057299c
    JMP 0x0057291f                      ; 00572936
        ;   XREF to: 0057291f (UNCONDITIONAL_JUMP)  ; LAB_0057291f
    ADD EBX,EBX                         ; 00572938
        ;   Label: LAB_00572938
    JNC 0x00572966                      ; 0057293a
        ;   XREF to: 00572966 (CONDITIONAL_JUMP)  ; LAB_00572966
    JNZ 0x0057294b                      ; 0057293c
        ;   XREF to: 0057294b (CONDITIONAL_JUMP)  ; LAB_0057294b
    OR ESI,ESI                          ; 0057293e
    SETNZ BL                            ; 00572940
    SHR EBX,0x1                         ; 00572943
    JC 0x0057294b                       ; 00572945
        ;   XREF to: 0057294b (CONDITIONAL_JUMP)  ; LAB_0057294b
    MOV ESI,EAX                         ; 00572947
    SHR ESI,0x1                         ; 00572949
    ADC EAX,0x0                         ; 0057294b
        ;   Label: LAB_0057294b
    ADC EDX,0x0                         ; 0057294e
    TEST EDX,0x200000                   ; 00572951
    JZ 0x00572966                       ; 00572957
        ;   XREF to: 00572966 (CONDITIONAL_JUMP)  ; LAB_00572966
    SHR EDX,0x1                         ; 00572959
    RCR EAX,0x1                         ; 0057295b
    INC CX                              ; 0057295d
    CMP CX,0x7ff                        ; 0057295f
    JZ 0x0057299c                       ; 00572964
        ;   XREF to: 0057299c (CONDITIONAL_JUMP)  ; LAB_0057299c
    OR CX,CX                            ; 00572966
        ;   Label: LAB_00572966
    JG 0x00572981                       ; 00572969
        ;   XREF to: 00572981 (CONDITIONAL_JUMP)  ; LAB_00572981
    JNZ 0x00572971                      ; 0057296b
        ;   XREF to: 00572971 (CONDITIONAL_JUMP)  ; LAB_00572971
    MOV CL,0x1                          ; 0057296d
    JMP 0x00572976                      ; 0057296f
        ;   XREF to: 00572976 (UNCONDITIONAL_JUMP)  ; LAB_00572976
    NEG CX                              ; 00572971
        ;   Label: LAB_00572971
    DEC CX                              ; 00572974
    SUB EBX,EBX                         ; 00572976
        ;   Label: LAB_00572976
    SHRD EAX,EDX,CL                     ; 00572978
    SHRD EDX,EBX,CL                     ; 0057297b
    SUB CX,CX                           ; 0057297e
    AND EDX,0xfffff                     ; 00572981
        ;   Label: LAB_00572981
    MOV ESI,ECX                         ; 00572987
    ROR ECX,0xb                         ; 00572989
    ADD ESI,ESI                         ; 0057298c
    RCR ECX,0x1                         ; 0057298e
    AND ECX,0xfff00000                  ; 00572990
    OR EDX,ECX                          ; 00572996
    POP ESI                             ; 00572998
    POP EDI                             ; 00572999
    POP EBP                             ; 0057299a
    RET                                 ; 0057299b
    MOV EAX,ECX                         ; 0057299c
        ;   Label: LAB_0057299c
    POP ESI                             ; 0057299e
    POP EDI                             ; 0057299f
    POP EBP                             ; 005729a0
    JMP 0x00573607                      ; 005729a1
        ;   XREF to: 00573607 (UNCONDITIONAL_JUMP)  ; LAB_00573607
    SUB EDX,EDX                         ; 005735ea
        ;   Label: LAB_005735ea
    SUB EAX,EAX                         ; 005735ec
    RET                                 ; 005735ee
    PUSH EAX                            ; 00573607
        ;   Label: LAB_00573607
    CALL crt_math.c_set_range_error_errno_FUN_00568e9c ; 00573608
        ;   XREF to: 00568e9c (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_00568e9c()
    MOV EAX,0x84                        ; 0057360d
    CALL crt_unknown.c_FUN_00573ff0     ; 00573612
        ;   XREF to: 00573ff0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00573ff0()
    POP EAX                             ; 00573617
    AND EAX,0x80000000                  ; 00573618
        ;   Label: LAB_00573618
    OR EAX,0x7ff00000                   ; 0057361d
    MOV EDX,EAX                         ; 00573622
    SUB EAX,EAX                         ; 00573624
    RET                                 ; 00573626

