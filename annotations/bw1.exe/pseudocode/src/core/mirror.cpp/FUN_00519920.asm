; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_00519920(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_mirror.cpp_FUN_00519ff0 at 0051a038
;   core_mirror.cpp_FUN_0051a0a0 at 0051a17d
;
; Called Functions:
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519920
        ;   Label: core_mirror.cpp_FUN_00519920
    PUSH EDI                            ; 00519921
    SUB ESP,0xc                         ; 00519922
    MOV EBX,ESI                         ; 00519925
    MOV ESI,dword ptr [ESP + 0x18]      ; 00519927
    ADD ESI,0x30                        ; 0051992b
    PUSH ESI                            ; 0051992e
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051992f
    PUSH EDX                            ; 00519933
    LEA ESI,[ESP + 0x8]                 ; 00519934
    MOV EDI,EBX                         ; 00519938
    CALL core_xform.cpp_FUN_005b5080    ; 0051993a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x8]                 ; 0051993f
    ADD ESP,0x8                         ; 00519943
    MOVSD ES:EDI,ESI                    ; 00519946
    MOVSD ES:EDI,ESI                    ; 00519947
    MOVSD ES:EDI,ESI                    ; 00519948
    MOV EAX,EBX                         ; 00519949
    ADD ESP,0xc                         ; 0051994b
    POP EDI                             ; 0051994e
    POP EBX                             ; 0051994f
    RET                                 ; 00519950

