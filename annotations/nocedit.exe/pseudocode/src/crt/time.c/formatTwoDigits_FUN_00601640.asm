; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void __watcallStack crt_time_c_formatTwoDigits_FUN_00601640(int number,int position,char *buffer)
;
; Parameters:
; int              Stack[0x4]:4   number
; int              Stack[0x8]:4   position
; char *           Stack[0xc]:4   buffer
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_time.c_asctimeFormat_FUN_00601678 at 00601703
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00601640
        ;   Label: crt_time.c_formatTwoDigits_FUN_00601640
    SUB ESP,0x8                         ; 00601641
    MOV EAX,dword ptr [ESP + 0x10]      ; 00601644
    MOV ECX,0xa                         ; 00601648
    MOV ESI,ESP                         ; 0060164d
    CDQ                                 ; 0060164f
    IDIV ECX                            ; 00601650
    MOV dword ptr [ESI],EAX             ; 00601652
    MOV dword ptr [ESI + 0x4],EDX       ; 00601654
    MOV ESI,dword ptr [ESP + 0x18]      ; 00601657
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060165b
    MOV AL,byte ptr [ESP]               ; 0060165f
    ADD ESI,EDX                         ; 00601662
    ADD AL,0x30                         ; 00601664
    MOV byte ptr [ESI],AL               ; 00601666
    MOV AL,byte ptr [ESP + 0x4]         ; 00601668
    ADD AL,0x30                         ; 0060166c
    MOV byte ptr [ESI + 0x1],AL         ; 0060166e
    ADD ESP,0x8                         ; 00601671
    POP ESI                             ; 00601674
    RET                                 ; 00601675

