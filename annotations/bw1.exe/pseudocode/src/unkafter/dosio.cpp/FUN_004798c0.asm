; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_dosio_cpp_FUN_004798c0(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_dosio.cpp_FUN_00479180 at 004791cc
;
; Called Functions:
;   crt_watcom.c__mkdir_FUN_005c2000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004798c0
        ;   Label: unkafter_dosio.cpp_FUN_004798c0
    PUSH ESI                            ; 004798c1
    PUSH EDI                            ; 004798c2
    PUSH EBP                            ; 004798c3
    SUB ESP,0x104                       ; 004798c4
    MOV EBP,dword ptr [ESP + 0x118]     ; 004798ca
    MOV EDI,ESP                         ; 004798d1
    MOV ESI,EBP                         ; 004798d3
    PUSH EDI                            ; 004798d5
    MOV AL,byte ptr [ESI]               ; 004798d6
        ;   Label: LAB_004798d6
    MOV byte ptr [EDI],AL               ; 004798d8
    CMP AL,0x0                          ; 004798da
    JZ 0x004798ee                       ; 004798dc
        ;   XREF to: 004798ee (CONDITIONAL_JUMP)  ; LAB_004798ee
    MOV AL,byte ptr [ESI + 0x1]         ; 004798de
    ADD ESI,0x2                         ; 004798e1
    MOV byte ptr [EDI + 0x1],AL         ; 004798e4
    ADD EDI,0x2                         ; 004798e7
    CMP AL,0x0                          ; 004798ea
    JNZ 0x004798d6                      ; 004798ec
        ;   XREF to: 004798d6 (CONDITIONAL_JUMP)  ; LAB_004798d6
    POP EDI                             ; 004798ee
        ;   Label: LAB_004798ee
    MOV AH,byte ptr [ESP]               ; 004798ef
    MOV EBX,ESP                         ; 004798f2
    TEST AH,AH                          ; 004798f4
    JZ 0x00479927                       ; 004798f6
        ;   XREF to: 00479927 (CONDITIONAL_JUMP)  ; LAB_00479927
    XOR EAX,EAX                         ; 004798f8
        ;   Label: LAB_004798f8
    MOV AL,byte ptr [EBX]               ; 004798fa
    MOV dword ptr [ESP + 0x100],EAX     ; 004798fc
    CMP EAX,0x2f                        ; 00479903
    JNZ 0x00479945                      ; 00479906
        ;   XREF to: 00479945 (CONDITIONAL_JUMP)  ; LAB_00479945
    MOV EAX,ESP                         ; 00479908
        ;   Label: LAB_00479908
    PUSH EAX                            ; 0047990a
    MOV byte ptr [EBX],0x0              ; 0047990b
    CALL crt_watcom.c__mkdir_FUN_005c2000 ; 0047990e
        ;   XREF to: 005c2000 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005c2000(char * path)
    ADD ESP,0x4                         ; 00479913
    MOV AL,byte ptr [ESP + 0x100]       ; 00479916
    MOV byte ptr [EBX],AL               ; 0047991d
    MOV DL,byte ptr [EBX + 0x1]         ; 0047991f
        ;   Label: LAB_0047991f
    INC EBX                             ; 00479922
    TEST DL,DL                          ; 00479923
    JNZ 0x004798f8                      ; 00479925
        ;   XREF to: 004798f8 (CONDITIONAL_JUMP)  ; LAB_004798f8
    PUSH EBP                            ; 00479927
        ;   Label: LAB_00479927
    CALL crt_watcom.c__mkdir_FUN_005c2000 ; 00479928
        ;   XREF to: 005c2000 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005c2000(char * path)
    ADD ESP,0x4                         ; 0047992d
    TEST EAX,EAX                        ; 00479930
    SETZ AL                             ; 00479932
    AND EAX,0xff                        ; 00479935
    ADD ESP,0x104                       ; 0047993a
    POP EBP                             ; 00479940
    POP EDI                             ; 00479941
    POP ESI                             ; 00479942
    POP EBX                             ; 00479943
    RET                                 ; 00479944
    CMP EAX,0x5c                        ; 00479945
        ;   Label: LAB_00479945
    JZ 0x00479908                       ; 00479948
        ;   XREF to: 00479908 (CONDITIONAL_JUMP)  ; LAB_00479908
    JMP 0x0047991f                      ; 0047994a
        ;   XREF to: 0047991f (UNCONDITIONAL_JUMP)  ; LAB_0047991f

