; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * __watcallStack crt_time_c_asctimeFormat_FUN_00601678(_tm *timeptr,char *buffer)
;
; Parameters:
; _tm *            Stack[0x4]:4   timeptr
; char *           Stack[0x8]:4   buffer
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_asctime_FUN_00601768 at 00601777
;
; Referenced Globals:
;   char[12] g_MonthInitial
;   char[12] g_MonthSecondInitial
;   char[12] g_MonthThirdInitial
;   char[7] g_WeekdayInitial
;   char[7] g_WeekdaySecondInitial
;   char[7] g_WeekdayThirdInitial
;
; Called Functions:
;   crt_time.c_formatTwoDigits_FUN_00601640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601678
        ;   Label: crt_time.c_asctimeFormat_FUN_00601678
    PUSH ESI                            ; 00601679
    PUSH EDI                            ; 0060167a
    PUSH EBP                            ; 0060167b
    SUB ESP,0x8                         ; 0060167c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0060167f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00601683
    MOV EAX,dword ptr [ESI + 0x18]      ; 00601687
    MOV DL,byte ptr [EAX + 0x684cac]    ; 0060168a | g_WeekdayInitial
    MOV byte ptr [EBX],DL               ; 00601690
    MOV DL,byte ptr [EAX + 0x684cb3]    ; 00601692 | g_WeekdaySecondInitial
    MOV byte ptr [EBX + 0x1],DL         ; 00601698
    MOV AL,byte ptr [EAX + 0x684cba]    ; 0060169b | g_WeekdayThirdInitial
    MOV byte ptr [EBX + 0x3],0x20       ; 006016a1
    MOV byte ptr [EBX + 0x2],AL         ; 006016a5
    MOV EAX,dword ptr [ESI + 0x10]      ; 006016a8
    MOV DL,byte ptr [EAX + 0x684c88]    ; 006016ab | g_MonthInitial
    MOV byte ptr [EBX + 0x4],DL         ; 006016b1
    MOV DL,byte ptr [EAX + 0x684c94]    ; 006016b4 | g_MonthSecondInitial
    MOV byte ptr [EBX + 0x5],DL         ; 006016ba
    MOV AL,byte ptr [EAX + 0x684ca0]    ; 006016bd | g_MonthThirdInitial
    MOV byte ptr [EBX + 0x7],0x20       ; 006016c3
    PUSH EBX                            ; 006016c7
    MOV byte ptr [EBX + 0x6],AL         ; 006016c8
    PUSH 0x8                            ; 006016cb
    MOV EDX,dword ptr [ESI + 0xc]       ; 006016cd
    PUSH EDX                            ; 006016d0
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 006016d1
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    MOV AH,byte ptr [EBX + 0x8]         ; 006016d6
    ADD ESP,0xc                         ; 006016d9
    CMP AH,0x30                         ; 006016dc
    JNZ 0x006016e5                      ; 006016df
        ;   XREF to: 006016e5 (CONDITIONAL_JUMP)  ; LAB_006016e5
    MOV byte ptr [EBX + 0x8],0x20       ; 006016e1
    PUSH EBX                            ; 006016e5
        ;   Label: LAB_006016e5
    MOV byte ptr [EBX + 0xa],0x20       ; 006016e6
    PUSH 0xb                            ; 006016ea
    MOV ECX,dword ptr [ESI + 0x8]       ; 006016ec
    PUSH ECX                            ; 006016ef
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 006016f0
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    ADD ESP,0xc                         ; 006016f5
    PUSH EBX                            ; 006016f8
    MOV byte ptr [EBX + 0xd],0x3a       ; 006016f9
    PUSH 0xe                            ; 006016fd
    MOV EDI,dword ptr [ESI + 0x4]       ; 006016ff
    PUSH EDI                            ; 00601702
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 00601703
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    ADD ESP,0xc                         ; 00601708
    PUSH EBX                            ; 0060170b
    MOV byte ptr [EBX + 0x10],0x3a      ; 0060170c
    PUSH 0x11                           ; 00601710
    MOV EBP,dword ptr [ESI]             ; 00601712
    PUSH EBP                            ; 00601714
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 00601715
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    MOV ECX,0x64                        ; 0060171a
    MOV byte ptr [EBX + 0x13],0x20      ; 0060171f
    ADD ESP,0xc                         ; 00601723
    MOV EAX,dword ptr [ESI + 0x14]      ; 00601726
    MOV ESI,ESP                         ; 00601729
    CDQ                                 ; 0060172b
    IDIV ECX                            ; 0060172c
    MOV dword ptr [ESI],EAX             ; 0060172e
    MOV dword ptr [ESI + 0x4],EDX       ; 00601730
    PUSH EBX                            ; 00601733
    MOV EAX,dword ptr [ESP + 0x4]       ; 00601734
    PUSH 0x14                           ; 00601738
    ADD EAX,0x13                        ; 0060173a
    PUSH EAX                            ; 0060173d
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 0060173e
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    ADD ESP,0xc                         ; 00601743
    PUSH EBX                            ; 00601746
    PUSH 0x16                           ; 00601747
    MOV EAX,dword ptr [ESP + 0xc]       ; 00601749
    PUSH EAX                            ; 0060174d
    CALL crt_time.c_formatTwoDigits_FUN_00601640 ; 0060174e
        ;   XREF to: 00601640 (UNCONDITIONAL_CALL)  ; void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
    ADD ESP,0xc                         ; 00601753
    MOV byte ptr [EBX + 0x18],0xa       ; 00601756
    MOV EAX,EBX                         ; 0060175a
    MOV byte ptr [EBX + 0x19],0x0       ; 0060175c
    ADD ESP,0x8                         ; 00601760
    POP EBP                             ; 00601763
    POP EDI                             ; 00601764
    POP ESI                             ; 00601765
    POP EBX                             ; 00601766
    RET                                 ; 00601767

