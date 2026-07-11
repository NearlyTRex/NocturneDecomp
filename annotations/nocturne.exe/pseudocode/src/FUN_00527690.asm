; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18)
;
;
; XREF[2]:
;   FUN_0052c9d0 at 0052cc2f
;   FUN_0052e850 at 0052e937
;
; Referenced Globals:
;   undefined4 DAT_02dc7910
;   undefined4 DAT_02dc7914
;   undefined4 DAT_02dc7918
;   undefined4 DAT_02dc791c
;   undefined4 DAT_02dc7920
;   undefined4 DAT_02dc7924
;   undefined4 DAT_02dc7928
;   undefined4 DAT_02dc792c
;   undefined4 DAT_02dc7930
;   undefined4 DAT_02dc7934
;   undefined4 DAT_02dc7938
;   undefined4 DAT_02dc793c
;   undefined4 DAT_02dc7940
;   undefined4 DAT_02dc7944
;   undefined4 DAT_02dc7948
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00527690
        ;   Label: FUN_00527690
    MOV EAX,dword ptr [ESP + 0x8]       ; 00527691
    MOV [0x02dc7910],EAX                ; 00527695 | DAT_02dc7910
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052769a
    MOV [0x02dc7914],EAX                ; 0052769e | DAT_02dc7914
    MOV EAX,dword ptr [ESP + 0x10]      ; 005276a3
    MOV [0x02dc7918],EAX                ; 005276a7 | DAT_02dc7918
    MOV EAX,dword ptr [ESP + 0x14]      ; 005276ac
    MOV [0x02dc791c],EAX                ; 005276b0 | DAT_02dc791c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005276b5
    MOV [0x02dc7920],EAX                ; 005276b9 | DAT_02dc7920
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005276be
    MOV [0x02dc7924],EAX                ; 005276c2 | DAT_02dc7924
    MOV EAX,dword ptr [ESP + 0x20]      ; 005276c7
    MOV [0x02dc7928],EAX                ; 005276cb | DAT_02dc7928
    MOV EAX,dword ptr [ESP + 0x24]      ; 005276d0
    MOV [0x02dc792c],EAX                ; 005276d4 | DAT_02dc792c
    MOV EAX,dword ptr [ESP + 0x28]      ; 005276d9
    MOV [0x02dc7930],EAX                ; 005276dd | DAT_02dc7930
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005276e2
    MOV [0x02dc7934],EAX                ; 005276e6 | DAT_02dc7934
    MOV EAX,dword ptr [ESP + 0x30]      ; 005276eb
    MOV [0x02dc7938],EAX                ; 005276ef | DAT_02dc7938
    MOV EAX,dword ptr [ESP + 0x34]      ; 005276f4
    MOV [0x02dc793c],EAX                ; 005276f8 | DAT_02dc793c
    MOV EAX,dword ptr [ESP + 0x38]      ; 005276fd
    MOV [0x02dc7940],EAX                ; 00527701 | DAT_02dc7940
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00527706
    MOV [0x02dc7944],EAX                ; 0052770a | DAT_02dc7944
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052770f
    MOV [0x02dc7948],EAX                ; 00527713 | DAT_02dc7948
    MOV EAX,dword ptr [ESP + 0x44]      ; 00527718
    MOV [0x02dc794c],EAX                ; 0052771c | DAT_02dc794c
    MOV EAX,dword ptr [ESP + 0x48]      ; 00527721
    MOV [0x02dc7950],EAX                ; 00527725 | DAT_02dc7950
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0052772a
    MOV EDX,dword ptr [0x02dc8318]      ; 0052772e | DAT_02dc8318
    MOV [0x02dc7954],EAX                ; 00527734 | DAT_02dc7954
    TEST EDX,EDX                        ; 00527739
    JNZ 0x0052773f                      ; 0052773b
        ;   XREF to: 0052773f (CONDITIONAL_JUMP)  ; LAB_0052773f
    POP EBP                             ; 0052773d
    RET                                 ; 0052773e
    PUSH EDI                            ; 0052773f
        ;   Label: LAB_0052773f
    PUSH ESI                            ; 00527740
    PUSH EBX                            ; 00527741
    MOV ECX,dword ptr [ESP + 0x58]      ; 00527742
    PUSH ECX                            ; 00527746
    MOV EBX,dword ptr [ESP + 0x58]      ; 00527747
    PUSH EBX                            ; 0052774b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0052774c
    PUSH ESI                            ; 00527750
    MOV EDI,dword ptr [ESP + 0x58]      ; 00527751
    PUSH EDI                            ; 00527755
    MOV EBP,dword ptr [ESP + 0x58]      ; 00527756
    PUSH EBP                            ; 0052775a
    MOV ECX,dword ptr [ESP + 0x58]      ; 0052775b
    PUSH ECX                            ; 0052775f
    MOV EBX,dword ptr [ESP + 0x58]      ; 00527760
    PUSH EBX                            ; 00527764
    MOV ESI,dword ptr [ESP + 0x58]      ; 00527765
    PUSH ESI                            ; 00527769
    MOV EDI,dword ptr [ESP + 0x58]      ; 0052776a
    PUSH EDI                            ; 0052776e
    MOV EBP,dword ptr [ESP + 0x58]      ; 0052776f
    PUSH EBP                            ; 00527773
    MOV ECX,dword ptr [ESP + 0x58]      ; 00527774
    PUSH ECX                            ; 00527778
    MOV EBX,dword ptr [ESP + 0x58]      ; 00527779
    PUSH EBX                            ; 0052777d
    MOV ESI,dword ptr [ESP + 0x58]      ; 0052777e
    PUSH ESI                            ; 00527782
    MOV EDI,dword ptr [ESP + 0x58]      ; 00527783
    PUSH EDI                            ; 00527787
    MOV EBP,dword ptr [ESP + 0x58]      ; 00527788
    PUSH EBP                            ; 0052778c
    MOV ECX,dword ptr [ESP + 0x58]      ; 0052778d
    PUSH ECX                            ; 00527791
    MOV EBX,dword ptr [ESP + 0x58]      ; 00527792
    PUSH EBX                            ; 00527796
    MOV ESI,dword ptr [ESP + 0x58]      ; 00527797
    PUSH ESI                            ; 0052779b
    MOV EAX,EDX                         ; 0052779c
    MOV EDX,dword ptr [EDX]             ; 0052779e
    PUSH EAX                            ; 005277a0
    CALL dword ptr [EDX + 0x1c]         ; 005277a1
    ADD ESP,0x4c                        ; 005277a4
    POP EBX                             ; 005277a7
    POP ESI                             ; 005277a8
    POP EDI                             ; 005277a9
    POP EBP                             ; 005277aa
    RET                                 ; 005277ab

