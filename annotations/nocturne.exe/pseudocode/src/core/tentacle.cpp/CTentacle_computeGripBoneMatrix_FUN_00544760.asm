; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(int param_1)
;
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[2]:
;   core_tentacle.cpp_CTentacle_attractActorToward_FUN_005445c0 at 00544647
;   core_tentacle.cpp_CTentacle_process_FUN_00543c50 at 00543e04
;
; Referenced Globals:
;   undefined4 DAT_02dca1d0
;   undefined4 DAT_02dca1d4
;   undefined4 DAT_02dca1d8
;   undefined4 DAT_02dca1dc
;
; Called Functions:
;   core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544760
        ;   Label: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760
    PUSH EDI                            ; 00544761
    PUSH EBP                            ; 00544762
    SUB ESP,0xf0                        ; 00544763
    MOV EBX,ESI                         ; 00544769
    MOV EBP,dword ptr [0x02dca1d4]      ; 0054476b | DAT_02dca1d4
    LEA EAX,[EBP*0x4 + 0x0]             ; 00544771
    SUB EAX,EBP                         ; 00544778
    MOV EBP,dword ptr [ESP + 0x100]     ; 0054477a
    SHL EAX,0x4                         ; 00544781
    ADD EBP,0xfd0                       ; 00544784
    PUSH 0x3f000000                     ; 0054478a
    ADD EAX,EBP                         ; 0054478f
    MOV ESI,dword ptr [0x02dca1d0]      ; 00544791 | DAT_02dca1d0
    PUSH EAX                            ; 00544797
    LEA EAX,[ESI*0x4 + 0x0]             ; 00544798
    SUB EAX,ESI                         ; 0054479f
    SHL EAX,0x4                         ; 005447a1
    ADD EAX,EBP                         ; 005447a4
    PUSH EAX                            ; 005447a6
    LEA ESI,[ESP + 0x9c]                ; 005447a7
    LEA EDI,[ESP + 0x3c]                ; 005447ae
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 005447b2
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 005447b7
    LEA ESI,[ESP + 0x9c]                ; 005447bc
    ADD ESP,0xc                         ; 005447c3
    MOVSD.REP ES:EDI,ESI                ; 005447c6
    MOV ESI,dword ptr [0x02dca1dc]      ; 005447c8 | DAT_02dca1dc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005447ce
    SUB EAX,ESI                         ; 005447d5
    SHL EAX,0x4                         ; 005447d7
    PUSH 0x3f000000                     ; 005447da
    ADD EAX,EBP                         ; 005447df
    MOV ESI,dword ptr [0x02dca1d8]      ; 005447e1 | DAT_02dca1d8
    PUSH EAX                            ; 005447e7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005447e8
    SUB EAX,ESI                         ; 005447ef
    SHL EAX,0x4                         ; 005447f1
    ADD EAX,EBP                         ; 005447f4
    PUSH EAX                            ; 005447f6
    LEA ESI,[ESP + 0xc]                 ; 005447f7
    LEA EDI,[ESP + 0x6c]                ; 005447fb
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 005447ff
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    ADD ESP,0xc                         ; 00544804
    MOV ECX,0xc                         ; 00544807
    LEA EAX,[ESP + 0x60]                ; 0054480c
    PUSH 0x3f000000                     ; 00544810
    LEA ESI,[ESP + 0x4]                 ; 00544815
    PUSH EAX                            ; 00544819
    LEA EAX,[ESP + 0x38]                ; 0054481a
    MOVSD.REP ES:EDI,ESI                ; 0054481e
    PUSH EAX                            ; 00544820
    LEA ESI,[ESP + 0xcc]                ; 00544821
    MOV EDI,EBX                         ; 00544828
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0054482a
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0054482f
    LEA ESI,[ESP + 0xcc]                ; 00544834
    ADD ESP,0xc                         ; 0054483b
    MOVSD.REP ES:EDI,ESI                ; 0054483e
    MOV EAX,EBX                         ; 00544840
    ADD ESP,0xf0                        ; 00544842
    POP EBP                             ; 00544848
    POP EDI                             ; 00544849
    POP EBX                             ; 0054484a
    RET                                 ; 0054484b

