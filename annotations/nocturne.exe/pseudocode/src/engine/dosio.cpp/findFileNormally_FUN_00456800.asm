; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14f]:1  local_14f
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x3a]:4  local_3a
; undefined4       Stack[-0x32]:4  local_32
;
; XREF[3]:
;   core_main.c_FUN_004c85f0 at 004c86e7
;   engine_dosio.cpp_findFile_FUN_004567a0 at 004567e1
;   engine_pod.cpp_FUN_004f8a10 at 004f8a46
;
; Called Functions:
;   crt_io.c_getFileStat_FUN_00565dc0
;   crt_stdlib.c__fullpath_FUN_00565d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456800
        ;   Label: engine_dosio.cpp_findFileNormally_FUN_00456800
    PUSH ESI                            ; 00456801
    SUB ESP,0x148                       ; 00456802
    MOV EBX,dword ptr [ESP + 0x154]     ; 00456808
    TEST EBX,EBX                        ; 0045680f
    JZ 0x00456818                       ; 00456811
        ;   XREF to: 00456818 (CONDITIONAL_JUMP)  ; LAB_00456818
    CMP byte ptr [EBX],0x0              ; 00456813
    JNZ 0x00456823                      ; 00456816
        ;   XREF to: 00456823 (CONDITIONAL_JUMP)  ; LAB_00456823
    XOR EAX,EAX                         ; 00456818
        ;   Label: LAB_00456818
    ADD ESP,0x148                       ; 0045681a
    POP ESI                             ; 00456820
    POP EBX                             ; 00456821
    RET                                 ; 00456822
    PUSH 0x100                          ; 00456823
        ;   Label: LAB_00456823
    PUSH EBX                            ; 00456828
    LEA EAX,[ESP + 0x8]                 ; 00456829
    PUSH EAX                            ; 0045682d
    LEA ESI,[ESP + 0xc]                 ; 0045682e
    CALL crt_stdlib.c__fullpath_FUN_00565d00 ; 00456832
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__fullpath_FUN_00565d00()
    ADD ESP,0xc                         ; 00456837
    CMP EAX,ESI                         ; 0045683a
    JNZ 0x00456818                      ; 0045683c
        ;   XREF to: 00456818 (CONDITIONAL_JUMP)  ; LAB_00456818
    LEA EAX,[ESP + 0x100]               ; 0045683e
    PUSH EAX                            ; 00456845
    PUSH ESI                            ; 00456846
    CALL crt_io.c_getFileStat_FUN_00565dc0 ; 00456847
        ;   XREF to: 00565dc0 (UNCONDITIONAL_CALL)  ; undefined crt_io.c_getFileStat_FUN_00565dc0()
    ADD ESP,0x8                         ; 0045684c
    TEST EAX,EAX                        ; 0045684f
    JNZ 0x00456818                      ; 00456851
        ;   XREF to: 00456818 (CONDITIONAL_JUMP)  ; LAB_00456818
    PUSH EDI                            ; 00456853
    MOV EAX,dword ptr [ESP + 0x11a]     ; 00456854
    MOV dword ptr [EBX + 0x204],EAX     ; 0045685b
    MOV EAX,dword ptr [ESP + 0x122]     ; 00456861
    MOV dword ptr [EBX + 0x200],0x0     ; 00456868
    LEA ESI,[ESP + 0x4]                 ; 00456872
    MOV dword ptr [EBX + 0x20c],EAX     ; 00456876
    LEA EDI,[EBX + 0x100]               ; 0045687c
    MOV dword ptr [EBX + 0x210],EAX     ; 00456882
    PUSH EDI                            ; 00456888
    MOV AL,byte ptr [ESI]               ; 00456889
        ;   Label: LAB_00456889
    MOV byte ptr [EDI],AL               ; 0045688b
    CMP AL,0x0                          ; 0045688d
    JZ 0x004568a1                       ; 0045688f
        ;   XREF to: 004568a1 (CONDITIONAL_JUMP)  ; LAB_004568a1
    MOV AL,byte ptr [ESI + 0x1]         ; 00456891
    ADD ESI,0x2                         ; 00456894
    MOV byte ptr [EDI + 0x1],AL         ; 00456897
    ADD EDI,0x2                         ; 0045689a
    CMP AL,0x0                          ; 0045689d
    JNZ 0x00456889                      ; 0045689f
        ;   XREF to: 00456889 (CONDITIONAL_JUMP)  ; LAB_00456889
    POP EDI                             ; 004568a1
        ;   Label: LAB_004568a1
    MOV EAX,0x1                         ; 004568a2
    MOV dword ptr [EBX + 0x208],0x0     ; 004568a7
    POP EDI                             ; 004568b1
    ADD ESP,0x148                       ; 004568b2
    POP ESI                             ; 004568b8
    POP EBX                             ; 004568b9
    RET                                 ; 004568ba

