; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005b48c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9d298
;
; *****************************************************************************

section .text

    ADD dword ptr [EAX],EAX             ; 005b48c0
        ;   Label: unkafter_winrun.cpp_FUN_005b48c0
    ADD byte ptr [EDI],CL               ; 005b48c2
    MOV DS,word ptr [EBP + 0x8b000000]  ; 005b48c4
    TEST byte ptr [ESP],AH              ; 005b48ca
    ADD byte ptr [EAX],AL               ; 005b48cd
    ADD byte ptr [EBX + 0xa824ac],CL    ; 005b48cf
    ADD byte ptr [EAX],AL               ; 005b48d5
    ADD EAX,EAX                         ; 005b48d7
    ADD EBP,EBP                         ; 005b48d9
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b48db
    MOV dword ptr [ESP + 0xa8],EBP      ; 005b48e2
    MOV EAX,dword ptr [ESP + 0x94]      ; 005b48e9
    MOV EDX,EAX                         ; 005b48f0
    SAR EDX,0x1f                        ; 005b48f2
    SUB EAX,EDX                         ; 005b48f5
    SAR EAX,0x1                         ; 005b48f7
    MOV EBX,EAX                         ; 005b48f9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b48fb
    MOV EDX,EAX                         ; 005b4902
    SAR EDX,0x1f                        ; 005b4904
    SUB EAX,EDX                         ; 005b4907
    SAR EAX,0x1                         ; 005b4909
    SUB EBX,EAX                         ; 005b490b
    MOV EAX,dword ptr [ESP + 0x98]      ; 005b490d
    MOV EDX,EAX                         ; 005b4914
    SAR EDX,0x1f                        ; 005b4916
    SUB EAX,EDX                         ; 005b4919
    SAR EAX,0x1                         ; 005b491b
    MOV ECX,EAX                         ; 005b491d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005b491f
    MOV EDX,EAX                         ; 005b4926
    SAR EDX,0x1f                        ; 005b4928
    SUB EAX,EDX                         ; 005b492b
    SAR EAX,0x1                         ; 005b492d
    PUSH 0x1                            ; 005b492f
    MOV EDX,dword ptr [ESP + 0xac]      ; 005b4931
    PUSH EDX                            ; 005b4938
    MOV ESI,dword ptr [ESP + 0xac]      ; 005b4939
    PUSH ESI                            ; 005b4940
    SUB ECX,EAX                         ; 005b4941
    PUSH ECX                            ; 005b4943
    PUSH EBX                            ; 005b4944
    MOV EDI,dword ptr [0x02c9d298]      ; 005b4945 | DAT_02c9d298
    PUSH EDI                            ; 005b494b
    CALL dword ptr CS:[0x5d04e0]        ; 005b494c
    POP EBX                             ; 005b4953
    POP ESI                             ; 005b4954
    POP EDI                             ; 005b4955
    ADD ESP,0xa0                        ; 005b4956
    POP EBP                             ; 005b495c
    RET                                 ; 005b495d

