; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054dcc0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a11ab
;   core_boneguy.cpp_FUN_004193c0 at 004193fc
;   core_carved.cpp_FUN_00425da0 at 00425efc
;   core_carved.cpp_FUN_004286c0 at 0042870e
;   core_carved.cpp_FUN_00428cb0 at 00428d69
;   core_charactr.cpp_FUN_0042fdc0 at 0042fe01
;   core_charactr.cpp_FUN_0042fe90 at 0042fed1
;   core_charactr.cpp_FUN_00432330 at 00432480
;   core_constrct.cpp_FUN_00442a20 at 00442ad5
;   core_constrct.cpp_FUN_00444010 at 00444035
;   ... and 29 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0054dcc0
        ;   Label: core_skeleton.cpp_FUN_0054dcc0
    SUB ESP,0xc                         ; 0054dcc1
    MOV EDX,ESI                         ; 0054dcc4
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054dcc6
    LEA EAX,[ECX*0x4 + 0x0]             ; 0054dcca
    SUB EAX,ECX                         ; 0054dcd1
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054dcd3
    SHL EAX,0x4                         ; 0054dcd7
    ADD ECX,EAX                         ; 0054dcda
    MOV EAX,dword ptr [ECX + 0xe8c]     ; 0054dcdc
    MOV dword ptr [ESP],EAX             ; 0054dce2
    MOV EAX,dword ptr [ECX + 0xe9c]     ; 0054dce5
    MOV EDI,ESI                         ; 0054dceb
    MOV dword ptr [ESP + 0x4],EAX       ; 0054dced
    MOV EAX,dword ptr [ECX + 0xeac]     ; 0054dcf1
    MOV ESI,ESP                         ; 0054dcf7
    MOV dword ptr [ESP + 0x8],EAX       ; 0054dcf9
    MOVSD ES:EDI,ESI                    ; 0054dcfd
    MOVSD ES:EDI,ESI                    ; 0054dcfe
    MOVSD ES:EDI,ESI                    ; 0054dcff
    MOV EAX,EDX                         ; 0054dd00
    ADD ESP,0xc                         ; 0054dd02
    POP EDI                             ; 0054dd05
    RET                                 ; 0054dd06

