; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00441580(CAsciiArmor *this_ptr,int *param_2)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   param_2
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_005f1320
;
; Called Functions:
;   support_codec.cpp_FUN_00440240
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00441580
        ;   Label: support_codec.cpp_CAsciiArmor_flush_FUN_00441580
    MOV EAX,ESP                         ; 00441583
    PUSH EAX                            ; 00441585
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441586
    ADD EAX,0x4                         ; 0044158a
    PUSH EAX                            ; 0044158d
    CALL support_codec.cpp_FUN_00440240 ; 0044158e
        ;   XREF to: 00440240 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440240()
    ADD ESP,0x8                         ; 00441593
    CMP dword ptr [ESP],0x0             ; 00441596
    JG 0x004415a5                       ; 0044159a
        ;   XREF to: 004415a5 (CONDITIONAL_JUMP)  ; LAB_004415a5
    MOV EAX,0x1                         ; 0044159c
    ADD ESP,0x4                         ; 004415a1
    RET                                 ; 004415a4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004415a5
        ;   Label: LAB_004415a5
    MOV AL,byte ptr [EAX + 0x5f1320]    ; 004415a9 | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    MOV EDX,dword ptr [EDX]             ; 004415af
    AND EAX,0xff                        ; 004415b1
    PUSH EAX                            ; 004415b6
    MOV ECX,dword ptr [ESP + 0x10]      ; 004415b7
    PUSH ECX                            ; 004415bb
    CALL dword ptr [EDX + 0x4]          ; 004415bc
    ADD ESP,0x8                         ; 004415bf
    MOV EAX,0x1                         ; 004415c2
    ADD ESP,0x4                         ; 004415c7
    RET                                 ; 004415ca

