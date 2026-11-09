; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434070(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043ec2f
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0
;   support_trstream.cpp_FUN_0057d520
;   support_trstream.cpp_FUN_0057d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434070
        ;   Label: support_codec.cpp_FUN_00434070
    PUSH ESI                            ; 00434071
    PUSH EDI                            ; 00434072
    PUSH EBP                            ; 00434073
    SUB ESP,0x14                        ; 00434074
    MOV ESI,dword ptr [ESP + 0x30]      ; 00434077
    MOV EDX,dword ptr [ESI]             ; 0043407b
    PUSH EDX                            ; 0043407d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0043407e
    PUSH ECX                            ; 00434082
    LEA EAX,[ESP + 0x8]                 ; 00434083
    PUSH EAX                            ; 00434087
    CALL support_trstream.cpp_FUN_0057d520 ; 00434088
        ;   XREF to: 0057d520 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d520()
    ADD ESP,0xc                         ; 0043408d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00434090
    PUSH EDI                            ; 00434094
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00434095
    PUSH EBP                            ; 00434099
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043409a
    PUSH EAX                            ; 0043409e
    LEA EAX,[ESP + 0xc]                 ; 0043409f
    MOV EBX,dword ptr [ESP + 0x34]      ; 004340a3
    PUSH EAX                            ; 004340a7
    MOV EDX,dword ptr [ESP + 0x38]      ; 004340a8
    MOV EBX,dword ptr [EBX]             ; 004340ac
    PUSH EDX                            ; 004340ae
    CALL dword ptr [EBX + 0x10]         ; 004340af
    ADD ESP,0x14                        ; 004340b2
    MOV EBX,EAX                         ; 004340b5
    MOV EAX,ESP                         ; 004340b7
    PUSH EAX                            ; 004340b9
    CALL support_trstream.cpp_FUN_0057d760 ; 004340ba
        ;   XREF to: 0057d760 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d760()
    ADD ESP,0x4                         ; 004340bf
    MOV ECX,dword ptr [ESI]             ; 004340c2
    PUSH 0x0                            ; 004340c4
    SUB ECX,EAX                         ; 004340c6
    LEA EAX,[ESP + 0x4]                 ; 004340c8
    PUSH EAX                            ; 004340cc
    MOV dword ptr [ESI],ECX             ; 004340cd
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0 ; 004340cf
        ;   XREF to: 0057d5a0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004340d4
    MOV EAX,EBX                         ; 004340d7
    ADD ESP,0x14                        ; 004340d9
    POP EBP                             ; 004340dc
    POP EDI                             ; 004340dd
    POP ESI                             ; 004340de
    POP EBX                             ; 004340df
    RET                                 ; 004340e0

